#include <stdio.h>


int main(void){

	int a,b;
	
	scanf("%d",&a);
	
	for(b=a%10+1; a!=0;a/=10){
		
		if(b<=(a%10)) {printf("NO"); return 0;}
		
		b=a%10;
	}
	
		printf("YES");
	
return 0;
}
