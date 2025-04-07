/*
#include <stdio.h>
#include <string.h>

#define SIZE 10

void change_max_min(int, int*);

int main (void)
{
	
	int i,j,a[SIZE];
	
	
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
		
    change_max_min(i,a);
	
	
	for(j=0;j<i;j++)
		printf("%d ",a[j]);

return 0; 
}
//-----------------------------------
*/
void change_max_min(int size, int a[])
{
	
	int max,min,imax,imin,j;
	
	imax=imin=0;
	max=min=a[0];
		
	for(j=1;j<size;j++){
		
		if(max<a[j])
			{imax=j;max=a[j];}
		
		if(min>a[j])
			{imin=j;min=a[j];}
				
	}
	
	j=a[imax];
	a[imax]=a[imin];
	a[imin]=j;	
				
return;
}	
