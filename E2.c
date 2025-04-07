#include <stdio.h>

#define SIZE 5

int main (void)
{
	int a[SIZE], min,i;
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
	
	for(i=1, min=a[0];i<SIZE;i++)
		if(a[i]<min)
			min=a[i];
	
	printf("%d",min);
  
return 0; 
}
