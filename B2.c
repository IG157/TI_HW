#include <stdio.h>

int main(void){

	int a,b;
	
	scanf("%d %d",&a,&b);
	
	if (a>b) return 0;

	for(;a<=b;a++)
		printf("%d ",a*a);


return 0;
}
