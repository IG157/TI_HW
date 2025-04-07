/*
#include <stdio.h>

#define SIZE 5

void sort_array(int size, int a[]);


int main (void)
{
	int b[SIZE],i;
	

	for(i=0;i<SIZE;i++)					
		scanf("%d",&b[i]);
	
	sort_array(SIZE, b);
			
	for(i=0;i<SIZE;i++)	
		printf("%d ",b[i]);

return 0; 
}
*/
//----------------------------

void sort_array(int size, int a[])
{

	int i,j,ab;


	for(i=0;i<size-1;i++){
		
		for(j=i+1;j<size;j++){
		
			if(a[j]<a[i]){
			
				ab=a[i];
				a[i]=a[j];
				a[j]=ab;
			
			}//if(a[j]<a[i])	
		}//for(j=i+1;j<size;j++)
	}//for(i=0;i<size-1;i++)
	
}	
