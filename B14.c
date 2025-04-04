#include <stdio.h>

int main(void){
	
	char s,a,b;

	s=getchar();
	
	if(s=='0'){printf("%d",0); return 0;}


	while(1){
			
		b=s;
		s=getchar();
		
		if(b==' ')
			a++;
		
		if(s=='0' && b==' ')
			break;
			
	}	
	
	printf("%d",a);
	
return 0;
}	
