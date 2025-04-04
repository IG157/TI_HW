#include <stdio.h>

int main(void){

	int a,b,sum,pr;
	
	scanf("%d",&a);
	
	for(int i=10;i<=a;i++,sum=0,pr=1,b=i){
		
		while (b) {
			sum += b % 10;
			pr*=b%10;
			b /= 10;
		}	
		
		if(sum==pr) printf("%d ",i);
		
	}

return 0;
}
