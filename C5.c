#include <stdio.h>

int sum(int);

int main(void){

	int n;
	
	scanf("%d",&n);
		
	printf("%d",sum(n));
	
return 0;
}

//-----------------------------
int sum(int c){

	int sm;
	
	for(sm=0;c;c--)
		sm+=c;
	
return sm;
}	


