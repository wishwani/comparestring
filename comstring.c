#include <stdio.h>
# include "str.h" 

 
int main()
{
	
   char a[1000], b[1000];
 	
	printf(" first string\n");
	scanf("%s",a);
 
   	printf(" second string\n");
   	scanf("%s",b);

	
	
	
 
   if (comparestrings(a,b)==0)
      printf(" strings are equal.\n");
   else
      printf(" strings are not equal.\n");
 
   return 0;
	
	}
	
	
 
   

 

