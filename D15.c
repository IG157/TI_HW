#include <stdio.h>

int max_find(int);

int main (void)
{
		
	printf("%d",max_find(0));
  
return 0; 
}
//-----------------------------------
int max_find(int max)
{
	int a;
	scanf("%d",&a);

	if(a==0)
		return 0;
	
	if(a>max_find(a))
		return a;
}	
