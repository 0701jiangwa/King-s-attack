#include<stdio.h>
#include<stdlib.h>
int main()
{
	int fun(int a,int b);
	int a,b,c;
	printf("Please enter a:\n");
	scanf("%d",&a);//����������a
	printf("Please enter b:\n");
	scanf("%d",&b);//����������b
	c=fun(a,b);
	printf("The number c is %d"\n,c);//���������c
	system("pause");
	return 0;
	
}
int fun(int a,int b)
{
	int c1,c2,c3,c4;//c1��c2��c3��c4�ֱ��Ӧc��ǧλ����λ��ʮλ����λ
	c1=a%10;
	c2=b/10;
	c3=a/10;
	c4=b%10;
	return(c1*1000+c2*100+c3*10+c4);
}
