#include <stdio.h>

#define SIZE 10

int main (void)
{
	int a[SIZE]={};
	int b[SIZE]={};
	int i,ab;
			
	for(i=0;i<SIZE;i++){
		scanf("%d",&ab);
		

		if(ab>0)
			a[i]=ab;
		else if (ab<0)
			b[i]=ab;
		else
			a[i]=b[i]=0;
		
	}
		
	for(i=0;i<SIZE;i++)	
		if(a[i]!=0)
			printf("%d ",a[i]);

	for(i=0;i<SIZE;i++)	
		if(b[i]!=0)
			printf("%d ",b[i]);


return 0; 
}
