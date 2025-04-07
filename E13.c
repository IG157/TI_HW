#include <stdio.h>

#define SIZE 10

int main (void)
{
	int a[SIZE],b[SIZE],i,j;
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
	
	for(i=0,j=0;i<SIZE;i++){
		if((a[i]/10)%10==0)
				{b[j]=a[i]; j++;}
	}//for(i=0,j=0;i<SIZE;i++)
		
	for(i=0;i<j;i++)	
		printf("%d ",b[i]);
  
return 0; 
}
