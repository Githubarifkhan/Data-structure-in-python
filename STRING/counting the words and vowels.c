#include<stdio.h>
int main()
{
	char a[] = "How are you";
	int i,vcount=0, ccount = 0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i] == 'a' || a[i] == 'A'|| a[i] =='e'||a[i] == 'E'||a[i] == 'i'||a[i] == 'I'||a[i] == 'o'||a[i] == 'O'||a[i] == 'u'||a[i] == 'U')
		
		{
			vcount++;
		}		
	
		else if((a[i]>=65 && a[i]<=90 )
		        || (a[i]>=97 && a[i]<=122))
		{
			ccount++;
		}
	}
	printf("number of vcount is %d \n and numeber of ccount %d \n and total number is %d", ccount, vcount,i);
	return 0;
}


