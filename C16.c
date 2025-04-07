#include <stdio.h>
#include <stdlib.h>

int is_prime(int);

int main(void){

	int a;
		
	scanf("%d",&a);

	if(a<0)
		return 0;
		
	if (is_prime(a))
		printf("YES");
	else
		printf("NO");

return 0;
}
//-------------------------------

int is_prime(int ch){
	
	if(ch==1 || ch==0)
		return 0;
		
	for(int i=2;i<ch;i++)
		if(ch%i==0)
			return 0;
		
	return 1;
}		


