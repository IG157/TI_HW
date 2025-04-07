#include <stdio.h>

void num(void);

int main (void)
{

	num();
  
return 0; 
}
//-----------------------------------
void num(void)
{
	int a;
	scanf("%d",&a);

	if(a==0)
		return;
	
	if (a%2)	
		printf("%d ",a);

	num();
	
return;	
		
}	
