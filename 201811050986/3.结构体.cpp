#include <iostream>
#include <string>
using namespace std;
int character(char a,char b)//aΪ��ǰ���룬bΪջ��Ԫ��
{
	int c;//c�Ƿ���ָ�0���������1��������2�����ջ��3ɾ����ǰԪ�ؼ�ջ��Ԫ�أ�4����
	switch(a)
	{
	case '#':
		if(b=='#')	c=0;
		else c=1;	break;
	case '+':
		if(b=='#'||b=='(')	c=2;
		else c=1;	break;
	case '-':
		if(b=='#'||b=='(')	c=2;
		else c=1;break;
	case '*':
		if(b=='*'||b=='/')	c=1;
		else c=2;	break;
	case '/':
		if(b=='*'||b=='/')	c=1;
		else c=2;	break;
	case '(':
		c=2;	break;
	case ')':
		if(b=='(')	c=3;
		else c=1;	break;
	default:
		c=4;
		break;
	}
	return c;
}
int main()
{
	char str[50]={" \0"};
	char *p=str;
	double *p3,*p4,a=0,b=0;//����ջ��ջ��ָ��p3��ջ��ָ��p4����ʼ��ջΪ�ա�
	char *p1,*p2;//����ջ��ջ��ָ��p2,ջ��ָ��p1
	char stack1[20];//����ջ
	double stack2[20];//����ջ
	p1=p2=stack1;
	p3=p4=stack2;
	*p2++='#';
	cout<<"������ʽ:"<<endl;
	gets(str);
	strcat(str,"#");
	while(*p!='\0')
	{
		if(*p<='9'&&*p>='0')
		{
			a=a*10+(*p-'0');
			if(*(p+1)>'9'||*(p+1)<'0')
			{
				*p4++=a;
				a=0;
			}
			p++;
		}
		else{ 
			switch(character(*p,*(p2-1)))
			{
			case 0:
				cout<<"������Ϊ:"<<*p3;
				p++;
			case 1:
				b=*--p4;
				switch(*(--p2))
				{
				case '+':
					*(p4-1)=*(p4-1)+b;
					break;
				case '*':
					*(p4-1)=*(p4-1)*b;
					break;
				case '-':
					*(p4-1)=*(p4-1)-b;
					break;
				case '/':
					*(p4-1)=*(p4-1)/b;
					break;
				}
				break;
			case 2:
			    *p2++=*p++;
			break;
			case 3:
				p++;p2--;break;
			case 4:
			p++;
			break;
			}
		}
	}
	return 0;
}