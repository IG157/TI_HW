#include <stdio.h>

int mod(int);


int main(void){

	int a;

	scanf("%d",&a);
	
	printf("%d", mod(a));

return 0;
}

int mod(int b){
	
	if(b<0)
		b*=(-1);
		
return b;	
}	
