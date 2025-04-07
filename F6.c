/*
#include <stdio.h>
#include <string.h>

#define SIZE 100

int is_two_same(int , int *);

int main (void)
{
	int i;
	int b[SIZE];
		
	for(i=0;i<SIZE;i++)					
		scanf("%d",&b[i]);


	
	printf("%d",is_two_same(i, b));	

			
return 0; 
}
//-----------------------------------
*/
int is_two_same(int size, int a[])
{
	
	for(int i=0;i<size;i++)
		for(int j=i+1;j<size;j++)
			if(a[i]==a[j])
				return 1;
	
return 0;	
}	
