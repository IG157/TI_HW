#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(void){

	int a;
	
	scanf("%d",&a);
	
	if (a==0){
		printf("%d",0);
		return 0;
	}	
	
	printf("%d",sum(a));
	
return 0;
}
//-------------------------------

int sum(int n){
	
	if (n==1)
		return 1;
	
	return n+sum(n-1);
}		


