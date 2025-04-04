#include <stdio.h>

int main(void){
	
	int a,b,mn,mx;
	
	scanf("%d",&a);
	
	for(mx=mn=a%10;a!=0;a/=10){
		
		if(mx<(a%10))		
			mx=a%10;
		if(mn>=(a%10))		
			mn=a%10;
		
		b=a%10;
	}	
	
	
	printf("%d %d",mn,mx);

return 0;
}	
