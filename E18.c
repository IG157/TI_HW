#include <stdio.h>

#define SIZE 8

int main (void)
{
	int i,j,n,k;
				
	scanf("%d",&n);
	
	if(n<2 || n>10000)
		return 0;
			
	for(i=2;i<10;i++){
		
		for(j=i,k=0;j<=n;j++){
	
			if(j%i==0)
				k++;
	
		}//for(j=i,k=0;j<=n;j++)
	
		printf("%d %d\n",i,k);			
			
	}//for(i=2;i<10;i++)	
	
		
return 0; 
}
