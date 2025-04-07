#include <stdio.h>
#include <stdlib.h>

int digit_to_num(char c);

int main(void){

	char s;
	int sum;
		
	for(s=0;(s=getchar())!='.';)
		sum+=digit_to_num(s); 
		
	printf("%d",sum);
	
return 0;
}
//-------------------------------

int digit_to_num(char c){
	
	if(c>=48 && c<=57)
		return (c-48);
				
	return 0;
}		


