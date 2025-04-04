#include <stdio.h>


int main(void){

	int a,b;
	
	scanf("%d",&a);
	
	for(b=0; a!=0;a/=10){
		
		b*=10;
		b+=(a%10);
		
	}
	
		printf("%d",b);
	
return 0;
}
