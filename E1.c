#include <stdio.h>

#define SIZE 5

int main (void)
{
	int a[SIZE], sum,i;
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<SIZE;i++)
		sum+=a[i];
	
	printf("%.3f",(float) sum/SIZE);
  
return 0; 
}
