#include <stdio.h>

#define SIZE 10

int main (void)
{
	int a[SIZE];
	//int b[SIZE]={};
	int i,j,max,k;
	int mk=0;		
			
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
	
			
	for(i=0;i<SIZE;i++){
		
		for(j=0,k=0;j<SIZE;j++){
	
			if(a[i]==a[j])
				k++;
	
		}//for(j=0;j<SIZE;j++)
	
		if(k>mk)
			{max=a[i];mk=k;}
			
	}//for(i=0;i<SIZE;i++)	
	
		
	printf("%d",max);


return 0; 
}
