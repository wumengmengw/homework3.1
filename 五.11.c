#include<stdio.h>
int main()
{
	double s=100,h=s/2;
	int n;
	for(n=2;n<=10;n++)
	{
		s=s+2*h;
		h=h/2;
	}
	printf("��10�����ʱ������%f��\n",s);
	printf("��10�η���%f��\n",h);
	return 0;
}