#include <stdio.h>

int main(void){

	int a;
	
	scanf("%d",&a);
	
	if (a>100) a=100;// не вводит число больше 100
	
	for (int i=1;i<=a;i++)		
		printf("%d %d %d\n",i,i*i,i*i*i);
	
	
return 0;
}
