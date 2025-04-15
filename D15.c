#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int num_max(void);


int main(int argc, char *argv[]) {

	printf("%d",num_max());

return 0;
}
//--------------------------------------
int num_max(void){
	
	int num, num1;
	scanf("%d",&num);
	
	if(num==0)
		return -255;
		
	num1=num_max();
	
	return num>=num1? num:num1;
}



