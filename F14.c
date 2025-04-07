/*
#include <stdio.h>
#include <string.h>

#define SIZE 10

int sum_between_ab(int from, int to, int size, int a[]);

int main (void)
{
	
	int i,a[SIZE];
	
	
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
		
   
	
	
	printf("%d ",sum_between_ab(6, 4, i, a));

return 0; 
}
//-----------------------------------
*/
int sum_between_ab(int from, int to, int size, int a[])
{
	
	int sum,j;
	
	if(from>to){
		j=from;
		from=to;
		to=j;
	}
	
	for(j=0,sum=0;j<size;j++)
		if(a[j]>=from && a[j]<=to)
			sum+=a[j];
	
return sum;
}	
