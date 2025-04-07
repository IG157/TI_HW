/*
#include <stdio.h>
#include <string.h>

#define SIZE 10

void swap_negmax_last(int , int*);


int main (void)
{
	int i;
	int a[SIZE];
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
		
	
	swap_negmax_last(i, a);
	
	for(i=0;i<SIZE;i++)
		printf("%d ",a[i]);
			
return 0; 
}
//-----------------------------------
*/
void swap_negmax_last(int size, int a[])
{
	int i,j,mx,c,k;
	
	for(i=0;i<size;i++)
		if(a[i]<0)
			{mx=a[i]; break;}	
	
	for(j=i;j<size;j++)
		if(a[j]<0)
			if(a[j]>=mx)
				{mx=a[j];k=j;}
	
	
	c=a[size-1];
	a[size-1]=mx;
	a[k]=c;
	
return;	
}	
	
