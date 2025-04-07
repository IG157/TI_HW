#include <stdio.h>
#include <stdlib.h>

int is_prime(int, int);

int main(void){

	int a;
	
	scanf("%d",&a);
	
	if (a<=1){
		printf("NO");
		return 0;
	}	
	
	if(is_prime(a, 2))	
		printf("YES");
	else
		printf("NO");
		
return 0;
}
//-------------------------------

int is_prime(int n, int delitel){
	
	if (n%delitel==0){
		if(n==delitel)
			return 1;
		else
			return 0;
	}
	else	
		return is_prime(n, delitel+1);
}		



