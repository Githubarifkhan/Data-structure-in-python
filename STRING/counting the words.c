#include<stdio.h>
int main()
{
	char a[] = "How are you there";
	int i, word = 1;
	for(i=0;a[i]!='\0';i++)
	{
		
		if(a[i] == ' ' && a[i-1] != ' ')
		{
		   word++;
		}
		printf("%d", word);
		
	}}
