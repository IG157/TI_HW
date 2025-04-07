#include <stdio.h>
#include <stdlib.h>

int is_digit(char);

int main(void){

	char s;
	int sum;
		
	for(s=0;(s=getchar())!='.';)
		sum+=is_digit(s); 
		
	printf("%d",sum);
	
return 0;
}
//-------------------------------

int is_digit(char c){
	
	if(c>='0' && c<='9')
		return 1;
				
	return 0;
}		


