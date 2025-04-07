#include <stdio.h>

int acounter(void);

int main (void)
{
		
	printf("%d",acounter());

return 0; 
}
//-----------------------------------
int acounter(void)
{
	char s;
	
	s=getchar();
	
	if (s=='.')
		return 0;
	
	if (s=='a')
		return (acounter()+1);
		
	return acounter();
      
}	
