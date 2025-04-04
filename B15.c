#include <stdio.h>

int main(void){
	
	char s,a,b,c;

	if((s=getchar())=='0'){printf("%d",0); return 0;}

	do{
			
		a=s;
		
		if(s>='0' && s<='9')
			b=b*10+s-'0';
		
		if(s==' '){
			if(b%2==0) c++;
			b=0;
		}
		
		s=getchar();
					
	}while(!(s=='0' && a==' '));	
	
	printf("%d",c);
	
return 0;
}	
