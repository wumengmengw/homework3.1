#include<stdio.h>
int main()
{
	int day,a,b;
	day=9;
	b=1;
	while(day>0)
	{a=(b+1)*2;
	 b=a;
	 day--;
	}
	printf("��ժ��%d������\n",a);
	return 0;
}