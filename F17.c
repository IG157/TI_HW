
#include <stdio.h>
#include <string.h>


#define SIZE 5

int sled(int n, int (*ar)[SIZE]);


int main (void)
{
	
	int i,j,a[SIZE][SIZE];
		
		
	for(i=0;i<SIZE;i++)
		for(j=0;j<SIZE;j++)
			scanf("%d",&a[i][j]);

	printf("%d",sled(i,a));

return 0; 
}
//-----------------------------------
int sled(int n, int ar[][n])
{
	int s=0;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i==j)
				s+=ar[i][j]; 
return s;
}	
