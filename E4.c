#include <stdio.h>

#define SIZE 10

int main (void)
{
	int a[SIZE], min,num_max, max, max_2, i;
		
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
	
	for(i=1, min=a[0],max=a[0], num_max=0;i<SIZE;i++){
		
		if(a[i]<min)
			min=a[i];
			
		if(a[i]>max){
			max=a[i];
			num_max=i;
		}
	}
	
	a[num_max]=min;
	
	
	for(i=1,max_2=a[0];i<SIZE;i++){
		
		if(a[i]>max_2)
			max_2=a[i];
	}
	
	printf("%d",max+max_2);
  
return 0; 
}
