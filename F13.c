/*
#include <stdio.h>
#include <string.h>

#define SIZE 10

int count_between(int from, int to, int size, int a[]);

int main (void)
{
	
	int i,a[SIZE];
	
	
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
		
   
	
	
	printf("%d ",count_between(4, 6, i, a));

return 0; 
}
//-----------------------------------
*/
int count_between(int from, int to, int size, int a[])
{
	
	int k,j;
	
	for(j=0,k=0;j<size;j++)
		if(a[j]>=from && a[j]<=to)
			k++;
	
return k;
}	
