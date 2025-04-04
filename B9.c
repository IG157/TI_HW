#include <stdio.h>


int main(void){

	int a,b,k;
	
	scanf("%d",&a);
	
	for(b=0,k=0; a!=0;a/=10){
		
		if((a%10)%2==0) k++;
		b++;
	}
	
	if(k==b)
		printf("YES");
	else
		printf("NO");
	
return 0;
}
