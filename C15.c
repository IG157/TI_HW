#include <stdio.h>
#include <stdlib.h>

int grow_up(int);

int main(void){

	int a;
		
	scanf("%d",&a);

	if(a<0)
		return 0;
		
	if (grow_up(a))
		printf("YES");
	else
		printf("NO");

return 0;
}
//-------------------------------

int grow_up(int ch){
	
	int a,b;
		
	for(b=9;ch;ch/=10){
		
		a=ch%10;
		if (a>=b)
			return 0;
		b=a;	
	}
			
	return 1;
}		


