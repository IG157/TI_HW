#include <stdio.h>
#include <stdlib.h>

void num(int, int, int);

int main(void){

	int a,b,c;
	
	scanf("%d %d",&a,&b);
	
	if (a>b)
		c=1;
	else
		c=0;
	
	num(a,b,c);
	
return 0;
}
//-------------------------------

void num(int n, int k, int l){
	
	if (n==k){
		printf("%d ", n);
		return;
	}
	
	printf("%d ", n);
	
	if(l)				
		num(n-1,k,l);
	else
		num(n+1,k,l);
}		



