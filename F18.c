
#include <stdio.h>
#include <string.h>


#define SIZE 10

int max(int , int*);

int main (void)
{
	
	int i,j,sum,a[SIZE][SIZE];
		
		
	for(i=0;i<SIZE;i++)
		for(j=0;j<SIZE;j++)
			scanf("%d",&a[i][j]);


	for(i=0,sum=0;i<SIZE;i++)
		sum+=max(SIZE,a[i]);


	printf("%d",sum);

return 0; 
}
//-----------------------------------
int max(int n, int b[])
{
	int mx=0;
	
	for(int i=0;i<n;i++)
		if(mx<b[i])
			mx=b[i];


return mx;	
}	
