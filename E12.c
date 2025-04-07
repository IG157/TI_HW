#include <stdio.h>

#define SIZE 10

int main (void)
{
	int a[SIZE],i,j,b;
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
	
	for(j=0;j<SIZE;j++){
		
		if (j<SIZE/2){
			for(i=0;i<SIZE/2;i++)
				if (a[j]<a[i]){
					b=a[i];
					a[i]=a[j];
					a[j]=b;
				}
		}//if (j<SIZE/2)
		else{
			for(i=SIZE/2;i<(SIZE-1);i++)
				if (a[j]>a[i]){
					b=a[i];
					a[i]=a[j];
					a[j]=b;
					
				}
		}		
	}//for(j=0;j<SIZE;j++)
		
	for(i=0;i<SIZE;i++)	
		printf("%d ",a[i]);
  
return 0; 
}
