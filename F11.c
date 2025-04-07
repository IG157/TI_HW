
#include <stdio.h>
#include <string.h>

#define SIZE 30

int minim(int,int*);
int maxim(int,int*);

int main (void)
{
	
	int i,a[SIZE],mn1,mn2;
	
	
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
		
		
	
	mn1=minim(i,a);		
	a[mn1]=maxim(i,a);
	mn2=minim(i,a);	
	
	if(mn1>mn2)
		printf("%d %d",mn2,mn1);
	else
		printf("%d %d",mn1,mn2);

return 0; 
}
//-----------------------------------
int minim(int n, int b[])
{
	
	int mn,k,j;
	
	for(j=1,mn=b[0],k=0;j<n;j++)
		if(mn>b[j])
			{mn=b[j];k=j;}
	
return k;
}		
//------------------------------------
int maxim(int n,int b[])
{
	
	int max,j;
	
	for(j=0,max=0;j<n;j++)
		if(max<b[j])
			max=b[j];
	
return max;
}	
