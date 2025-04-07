#include <stdio.h>
#include <stdlib.h>

int num(int);

int main(void){

	int a;
	
	scanf("%d",&a);
	
	if (a==0){
		printf("%d",0);
		return 0;
	}	
	
	printf("%d",num(a));
			
return 0;
}
//-------------------------------
int num(int n){
	
	if (n==0)
		return n%2;
	
	return num(n/2)+n%2;

	
}		


