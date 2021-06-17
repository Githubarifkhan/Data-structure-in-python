#include<stdio.h>
int main()
{
	char s[] ="WeLCoMe";
	int i;
	for(i = 0; s[i]!='\0'; i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			s[i]= s[i]+32;
		}
		else if(s[i]>=97 && s[i]<=122)
		{
			s[i]= s[i]-32;
		}
			
	}
	printf("changing case of string %s", s);
	return 0;

}

