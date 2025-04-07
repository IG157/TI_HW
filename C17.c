#include <stdio.h>
#include <stdlib.h>

int is_happy_number(int);

int main(void){

	int a;
		
	scanf("%d",&a);

	if(a<0)
		return 0;
		
	if (is_happy_number(a))
		printf("YES");
	else
		printf("NO");

return 0;
}
//-------------------------------

int is_happy_number(int ch){
	
	int sum,pr;
		

	for(sum=0, pr=1;ch;ch/=10){
		
		sum+=ch%10;
		pr*=ch%10;
	}
			
	if(pr!=sum)
		return 0;
			
	return 1;
}		


