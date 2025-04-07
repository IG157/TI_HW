#include <stdio.h>
#include <stdlib.h>

void reverse_string(char);

int main(void){

	reverse_string(getchar());
			
return 0;
}
//-------------------------------
void reverse_string(char s){
	
	
	if (s=='.')
		return;
	
	reverse_string(getchar());
	printf("%c",s);
}		

