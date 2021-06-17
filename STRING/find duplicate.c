#include<stdio.h>
/*int main()
{
	char a[] = "finding";
	int H[26], i;
	for(i = 0; a[i]!= '\0'; i++)
	{
		H[a[i]-97] +=1;
	}
	for(i = 0; i<26; i++)
	{
		if (H[i] >1)
		{
			printf("%c", i +97);
			printf("%d", H[i]);
		}
		
	}
}*/

//part 2
#include<stdio.h>
int main()
{
	char a[]= "finding";
	int H[26], i,x= 0;
	for(i =0;a[i]!='\0'; i++)
	{
		x=1;
		x= x<<a[i]-97;
		if(x & H >0)
		{
			printf("%c is duplicate", a[i]);
			
		}
		else
		{
			H = x || H;	
		}
			
	}
}
