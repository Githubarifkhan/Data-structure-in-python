#include<stdio.h>
int main()
{
	char a[] = "decimal";
	char b[]= "medical";
	
	int i,H[26] = {0};
	for (i =0; a[i]!= '\0'; i++)
	{
		H[a[i]-97]+=1;
	}
	for(i = 0; b[i]!= '\0'; i++)
	{
		H[a[i]-97]-=1;
		if(a[i]-97<0);
		{
			printf("not anagram");
			
		}
		if(b[i]= '\0')
			printf("anagram");
	}
	return 0;
}
