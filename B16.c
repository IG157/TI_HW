#include <stdio.h>


int main(void){

	int a,b,c;
	
	scanf("%d %d",&a,&b);

	if (a<b){
	  c = a;
      a = b;
      b = c;        
	}	

	while(b){
	  c = a % b;
      a = b;
      b = c;        	
	}	

	printf("%d",a);

return 0;
}
