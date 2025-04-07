#include <stdio.h>

void print_simple(int);

int main(void){

	int a, i=2;
		
	scanf("%d",&a);
	
	while(a!=1){
			
		while(a%i==0){
			a/=i;
			print_simple(i);
		}//while(a%i==0)
		
		i++;
	}//while(a!=1)

return 0;
}

//-----------------------------
void print_simple(int n){
	
	printf("%d ",n);

}	


