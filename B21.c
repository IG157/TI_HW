#include <stdio.h>


int main(void){

	char s;
	
	while((s=getchar())!='.'){
		
		if(s>=65 && s<=90)
			printf("%c",s+32);
		else
			printf("%c",s);
	}
	
return 0;
}
