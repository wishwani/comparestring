#include <stdio.h>
# include "str.h" 

 
int main()
{
	int result;
	char a[1000], b[1000];
	int len1=0,len2=0;
	int i;
 	
	printf(" firsrt string\n");
	scanf("%s",a);
 
   	printf(" second string\n");
   	scanf("%s",b);

	i=0;
	while(a[i++]!='\0') len1++;
	i=0;
	while(b[i++]!='\0') len2++;
	
	if(len1!=len2)
	{
		printf(" strings are not equal.\n");
		return -1;	
	}
	
	if(cs(a,b,len1)==0)
		printf ("are same.\n");
	else
		printf("not same.\n");
	return 0;
	
	}
	
 
   

 

