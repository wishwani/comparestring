# include "str.h"

char cs(char a[], char b[],int len){

   int i = 0;
 
  	for(i=0;i<len;i++)
	{
		if(a[i]!=b[i])
		{
		return -1;
		}
	
	}
	return 0;
	
	
   
}
