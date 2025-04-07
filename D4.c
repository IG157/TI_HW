#include <stdio.h>
#include <stdlib.h>

void print_num(int);

int main(void){

	int a;
	
	scanf("%d",&a);
	
	if (a==0){
		printf("%d",0);
		return 0;
	}	
	
	print_num(a);
			
return 0;
}
//-------------------------------
void print_num(int n){
	
	if (n==0)
		return;
	
	print_num(n/10);

	printf("%d ",n%10);
}		

