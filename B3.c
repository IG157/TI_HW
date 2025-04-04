#include <stdio.h>

int main(void){

	int a,b,sum;
	
	scanf("%d %d",&a,&b);
	
	if (a>b) return 0;

	for(sum=0;a<=b;a++)
		sum+=a*a;

	printf("%d",sum);
	
return 0;
}
