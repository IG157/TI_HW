#include <stdio.h>

#define SIZE 12

int main (void)
{
	int a[SIZE],b,i,j;
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
	
	for(j=0;j<4;j++){
		for(i=SIZE;i;--i){
			
			if(i==SIZE)		
				b=a[SIZE-1];
			
			if(i==1)
				a[i-1]=b;
			else	
				a[i-1]=a[i-2];
		}
	}
	
	for(i=0;i<SIZE;i++)
		printf("%d ",a[i]);
  
return 0; 
}
