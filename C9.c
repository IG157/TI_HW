#include <stdio.h>

int factorial(int);

int main(void){

	int a;
		
	scanf("%d",&a);
	
	
	printf("%d",factorial(a));
	
return 0;
}

//-----------------------------
int factorial(int n){
	
	if (n == 0 || n == 1) return 1;
	
	return n*factorial(n-1);
}	


