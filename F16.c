
#include <stdio.h>
#include <string.h>

int main (void)
{
	
	char a,b;
	
		
	a=getchar()-'A';
	b=getchar()-'0';
		
    if(a%2){
		if(b%2)
			printf("WHITE");
		else
			printf("BLACK");	
	}
	else{
		if(b%2)
			printf("BLACK");
		else
			printf("WHITE");	
	}

return 0; 
}
//-----------------------------------

