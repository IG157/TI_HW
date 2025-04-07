/*
#include <stdio.h>

#define SIZE 20

void sort_even_odd(int n, int a[]);


int main (void)
{
	int b[SIZE],i;
	

	for(i=0;i<SIZE;i++)					
		scanf("%d",&b[i]);
	
	sort_even_odd(SIZE, b);
			
//	for(i=0;i<SIZE;i++)	
//		printf("%d ",b[i]);

return 0; 
}
*/
//----------------------------

void sort_even_odd(int n, int a[])
{

	int i,j,ab,k;

	for(i=0,k=0;i<n;i++){
		
		for(j=i+1;j<n;j++){
		
			if(a[i]%2){
				
					ab=a[i];
					a[i]=a[j];
					a[j]=ab;
					
				}//if(a[j]<a[i])	

		}//for(j=i+1;j<size;j++)
		
		if(a[i]%2)
			k++;
	}//for(i=0;i<size-1;i++)


	for(i=n-k;i<n;i++){
		
		for(j=i+1;j<n;j++){
		
				ab=a[i];
				a[i]=a[j];
				a[j]=ab;
			
		}//for(j=i+1;j<n;j++)
	}//for(i=n-k;i<n;i++)	
	
}	
