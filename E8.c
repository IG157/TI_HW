#include <stdio.h>

#define SIZE 12

int main (void)
{
	int a[SIZE],i;
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<SIZE;i++){
	
		if(i<SIZE/3)
			printf("%d ",a[SIZE/3-1-i]);
		else if (i>=SIZE/3 && i<2*SIZE/3)
			printf("%d ",a[SIZE-1-i]);
		else
			printf("%d ",a[SIZE+2*SIZE/3-1-i]);
	}
	
  
return 0; 
}
