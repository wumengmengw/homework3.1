#include<stdio.h>
int main()
{
	int a,n,i=1,t=0,s=0;
	printf("������a��ֵ:");
	scanf("%d",&a);
	printf("������n��ֵ:");
	scanf("%d",&n);
    while(i<=n)
	{
		t=t+a;
		s=s+t;
		a=a*10;
		i++;
	}
	printf("a+aa+aaa+��=%d\n",s);
	return 0;
}