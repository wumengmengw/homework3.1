#include<stdio.h>
int main()
{int i,a;
 char s1[100],s2[100];
 printf("input string1:");
 gets(s1);
 printf("input string2:");
 gets(s2);
 i=0;
 while ((s1[i]==s2[i])&&(s1[i]!='\0'))i++;
 if(s1[i]=='\0'&&s2[i]=='\0')
	 a=0;
 else
	 a=s1[i]-s2[i];
 printf("\nresult:%d.\n",a);
 return 0;
}