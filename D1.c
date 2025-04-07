#include <stdio.h>
#include <stdlib.h>

int num(int, int);

int main(void){

	int a;
	
	scanf("%d",&a);
	
	if (a==0){
		printf("%d",0);
		return 0;
	}	
	
	a=num(1,a);
	
return 0;
}
//-------------------------------

int num(int n, int k){
	
	if (n==k){
		printf("%d ",n);
		return n;
	}
	
	printf("%d ", n);
					
	return num(n+1,k);
}		


