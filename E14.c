#include <stdio.h>

#define SIZE 10

int main (void)
{
	int a[SIZE],b[SIZE],i,j,k,l,fl;
			
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
	
	for(j=0,k=0;j<SIZE;j++){
		
		for(i=j+1;i<SIZE;i++){
			
			if(a[j]==a[i]){
	
				for(l=0,fl=1;l<k;l++)
					if(b[l]==a[j])
						fl=0;
				
				if(fl)
					{b[k]=a[j];	k++;}
	
				break;
			}//if(a[j]==a[i])	
		}//for(i=j+1;i<SIZE;i++)
	}//for(j=0;j<SIZE;j++)
		
	for(i=0;i<k;i++)	
		printf("%d ",b[i]);

return 0; 
}
