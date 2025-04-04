#include <stdio.h>

int main(void){
	
	int a,b,c,d;
	
	scanf("%d",&a);
	
	for(c=d=0;a!=0;a/=10){
		
		b=a%10;
		if(b%2)		
			c++;
		else 
			d++;	
		
	}	
	
	
	printf("%d %d",d,c);

return 0;
}	
