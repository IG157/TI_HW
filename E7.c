#include <stdio.h>

#define SIZE 10

int main (void)
{
	int a[SIZE],i;
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<SIZE;i++){
	
		if(i<SIZE/2)
			printf("%d ",a[SIZE/2-1-i]);
		else
			printf("%d ",a[SIZE-1-i+SIZE/2]);
	
	}
	
  
return 0; 
}
