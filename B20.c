#include <stdio.h>


int main(void){

	int a;
	
	scanf("%d",&a);
	
	if(a==0){
		printf("NO"); 
		return 0;
	}
	
	if(a>1)
	{
		for(int i=2;i<a;i++)
			if (a%i==0) {printf("NO"); return 0;}

		printf("YES");
	}
	else
		printf("NO");
		
return 0;
}
