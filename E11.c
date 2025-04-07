#include <stdio.h>

#define SIZE 10

int main (void)
{
	int a[SIZE],i,j,b;
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
	
	for(j=0;j<SIZE;j++){
		
		for(i=0;i<SIZE;i++)
			if (a[j]%10<a[i]%10){
				b=a[i];
				a[i]=a[j];
				a[j]=b;
		}
	}//for(j=0;j<SIZE;j++)
		
	for(i=0;i<SIZE;i++)	
		printf("%d ",a[i]);
  
return 0; 
}
