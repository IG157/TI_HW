#include <stdio.h>
#include <stdlib.h>

void num(int);

int main(void){

	int a;
	
	scanf("%d",&a);
	
	if (a==0){
		printf("%d",0);
		return 0;
	}	
	
	num(a);
			
return 0;
}
//-------------------------------
void num(int n){
	
	if (n==0)
		return;
	
	num(n/2);

	printf("%d",n%2);
}		

