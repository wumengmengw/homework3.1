#include<stdio.h>
int main()
{
	int a,b,n,m,temp;
	printf("����������������n,m:");
	scanf("%d,%d,",&n,&m);
	if(n<m)
	{
		temp=n;
		n=m;
		m=temp;
	}
	a=n*m;
	while(m!=0)
	{
		b=n%m;
		n=m;
		m=b;
	}
	printf("���ǵ����Լ��Ϊ:%d\n",n);
    printf("���ǵ���С������Ϊ:%d\n",a/n);
	return 0;
}
