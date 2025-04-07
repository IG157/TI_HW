#include <stdio.h>
#include <stdlib.h>

char chnum(int);

int main(void){

	int a;
		
	scanf("%d",&a);

	if(a<0)
		return 0;
		
	if (chnum(a))
		printf("YES");
	else
		printf("NO");

return 0;
}
//-------------------------------

char chnum(int ch){
	
	int sum;
	
	for(;ch;ch/=10)
		sum+=(ch%10);
		
		if(sum%2)
			return 0;
			
	return 1;
}		


