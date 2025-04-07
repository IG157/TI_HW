#include <stdio.h>

#define SIZE 7


int main (void)
{
	int a[SIZE],n,i,j,ab;
	
				
	scanf("%d",&n);
	
	i=0;
		
	do{
		a[i]=n%10;
		i++;
	}while(n/=10);	
		
	n=i;
	
	for(i=0;i<n-1;i++){
		
		for(j=i+1;j<n;j++){
		
			if(a[j]>a[i]){
			
				ab=a[i];
				a[i]=a[j];
				a[j]=ab;
			
			}	
		}
	}	
		
	for(i=0,ab=0;i<n;i++)
		ab=ab*10+a[i];
		
		
	printf("%d ",ab);

return 0; 
}
