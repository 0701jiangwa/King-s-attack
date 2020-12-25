#include <iostream>
#include <string>
using namespace std;
int character(char a,char b)//a为当前读入，b为栈顶元素
{
	int c;//c是反馈指令，0代表结束；1代表弹出；2代表进栈；3删除当前元素及栈顶元素；4报错。
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
	double *p3,*p4,a=0,b=0;//数字栈，栈底指针p3，栈顶指针p4，初始化栈为空。
	char *p1,*p2;//符号栈的栈顶指针p2,栈底指针p1
	char stack1[20];//符号栈
	double stack2[20];//数字栈
	p1=p2=stack1;
	p3=p4=stack2;
	*p2++='#';
	cout<<"输入表达式:"<<endl;
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
				cout<<"计算结果为:"<<*p3;
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