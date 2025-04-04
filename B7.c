#include <stdio.h>


int main(void){

	int a,b;
	
	scanf("%d",&a);
	
	for(; a!=0;a/=10){
		
		b=a%10;
		
		for(int c=a/10;c!=0;c/=10)
			if (b==c%10){printf("YES"); return 0;}
		
	}
	
	printf("NO");

return 0;
}
