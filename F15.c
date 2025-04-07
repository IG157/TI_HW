/*
#include <stdio.h>
#include <string.h>

#define SIZE 10

int count_bigger_abs(int n, int a[]);

int main (void)
{
	
	int i,a[SIZE];
	
	
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
		
   
	
	
	printf("%d ",count_bigger_abs(i,a));

return 0; 
}
//-----------------------------------
*/
int count_bigger_abs(int n, int a[])
{
	
	int j,max,num;
	
	for(j=0,max=0;j<n;j++)
		if(max<a[j])
			max=a[j];
	
	for(j=0,num=0;j<n;j++){
		
		if(a[j]<0)		
			a[j]*=-1;

		if(a[j]>max)
			num++;
	}
				
return num;
}	
