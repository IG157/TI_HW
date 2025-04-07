#include <stdio.h>

int fn(int);

int main(void){

	char s;
	int a,b;
	
		
	for(b=0;(s=getchar())!='\n';){
		
		if(s!=' ')
			a=a*10+s-'0';
		else if (s==' '){
			a=fn(a);
			b=(b>a)?b:a;
			a=0;
		}//else if (s==' ')
		
	}//for(b=0;(s=getchar())!='\n';)

	printf("%d",b);
	
return 0;
}

//-----------------------------
int fn(int c){

	if(c>=-2 && c<2)
		return (c*c);
	else if (c>=2)
		return (c*c+ 4*c+5);
	else if (c<-2)
		return 4;

return 0;
}	


