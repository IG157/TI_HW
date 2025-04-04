#include <stdio.h>


int main(void){

	int a,b,k;
	
	scanf("%d",&a);
	
	for(b=0,k=0; a!=0;a/=10){
		
		b=a%10;
		if(b==9) k++;
	
	}
	
	if(k==1)
		printf("YES");
	else
		printf("NO");
	
return 0;
}
