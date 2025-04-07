
#include <stdio.h>
#include <string.h>

#define SIZE 1001

void sort(int*, int);
int find(int*, int);

int main (void)
{
	int i=0;
	int a[SIZE];
		
	do{
		scanf("%d",&a[i]);
		
		if(a[i]<0)
			return 0;
			
	}while(a[i++]!=0);
	
	sort(a,i);
	
	printf("%d",find(a, i));
			
return 0; 
}
//-----------------------------------
void sort(int a[], int n)
{
	
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[j]<a[i]){
				
				int c=a[i];
				a[i]=a[j];
				a[j]=c;	
			}	
}	
//-----------------------------------
int find(int a[], int n)
{
	
	for(int i=2;i<n;i++)
		if((a[i]-a[i-1])==2)
			return (a[i-1]+1);

	return 0;
}	
