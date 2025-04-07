#include <stdio.h>

char lta(char);

int main(void){

	char s;
	
	for(;(s=getchar())!='.';)
		printf("%c",lta(s));
	
return 0;
}

//-----------------------------
char lta(char a ){
	if(a>=97 && a<=122)
		return a-32;	
	else
		return a;
}	


