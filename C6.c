#include <stdio.h>

unsigned long int sum(int);

int main(void){

	int n;
	
	scanf("%d",&n);
	
	
	if (n>=1 || n<=64)
		printf("%lu",sum(n-1));
		
	
return 0;
}

//-----------------------------
unsigned long int sum(int c){

	unsigned long int sm;
	
	for(sm=1;c;c--)
		sm*=2;
	
return sm;
}	


