#include <stdio.h>

int main(void){

	int a,b;
	
	scanf("%d",&a);

	do
	{
		b+=(a%10);
	
	}while(a/=10);	

	if(b==10)
		printf("YES");
	else	
		printf("NO");	

return 0;
}
