#include <stdio.h>

#define SIZE 10

int main (void)
{
	int a[SIZE], min,num_min, max, num_max, i;
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
	
	for(i=1, min=a[0],max=a[0], num_min=1, num_max=1;i<SIZE;i++){
		
		if(a[i]<min){
			min=a[i];
			num_min=i+1;
		}
		
		if(a[i]>max){
			max=a[i];
			num_max=i+1;
		}			
	}
	
	printf("%d %d %d %d",num_max,max,num_min,min);
  
return 0; 
}
