#include <stdio.h>

#define SIZE 7


int main (void)
{
	int a[SIZE],n,i;
	
				
	scanf("%d",&n);
	
	i=0;
		
	do{
		a[i]=n%10;
		i++;
	}while(n/=10);	
		
	while(i--)
		printf("%d ",a[i]);
		
		

return 0; 
}
