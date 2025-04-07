#include <stdio.h>

#define SIZE 12

int main (void)
{
	int a[SIZE], sum, i;
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
	
	for(i=0,sum=0 ;i<SIZE;i++)
		sum+=a[i];

	printf("%.2f",(float)sum/SIZE);
  
return 0; 
}
