/*
#include <stdio.h>
#include <string.h>

#define SIZE 10

int find_max_array(int size, int a[]);

int main (void)
{
	int i;
	int b[SIZE];
		
	for(i=0;i<SIZE;i++)					
		scanf("%d",&b[i]);


	
	printf("%d",find_max_array(i, b));	

			
return 0; 
}
//-----------------------------------
*/
int find_max_array(int size, int a[])
{
	
	int i,mx;
	
	for(i=0,mx=a[0];i<size;i++){
		
		if(mx<a[i])
			mx=a[i];
	}		
	
return mx;	
}	
