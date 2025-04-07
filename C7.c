#include <stdio.h>

unsigned long int swap(unsigned long int);

int main(void){

	int n,p;
	unsigned long int ss;
	
	scanf("%d %d",&n,&p);
	
	if(n<0)
		return 0;
			
	if(p<2 || p>9)		
		return 0;
		
	for(ss=1;n;n/=p)
		ss=ss*10+ n%p; 
			
	printf("%lu",swap(ss));
	
return 0;
}

//-----------------------------
unsigned long int swap(unsigned long int a ){

	unsigned long int b;
	
	for(b=0;a;){
		b=b*10+a%10;
		a/=10;
	}
	
return b/10;
}	


