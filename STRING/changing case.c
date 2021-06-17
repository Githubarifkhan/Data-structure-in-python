#include<stdio.h>
int main()
{
	char s[] ="WELCOME";
	int i;
	for(i = 0; s[i]!='\0'; i++)
	{
		s[i]= s[i]+32;
	}
	printf("changing case of string %s", s);
	return 0;

}

