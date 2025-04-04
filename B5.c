#include <stdio.h>


int main(void){

	int a, sum;
	
	scanf("%d",&a);
	
	for(sum=0; a!=0;a/=10)
		sum+=(a%10);
		
	printf("%d", sum);



return 0;
}
