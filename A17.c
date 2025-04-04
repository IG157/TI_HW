#include <stdio.h>

int main(void){

	int a;
	
	scanf("%d",&a);

	switch (a/3){
		
		case 0:
				printf("winter");
				break;
		case 1:
				printf("spring");
				break;
		case 2:
				printf("summer");
				break;
		case 3:
				printf("autumn");
				break;
		case 4:
				printf("winter");
				break;		
	}

return 0;
}
