#include <stdio.h>

int is2pow(int);

int main (void)
{
		
	int a;	
		
	scanf("%d",&a);
		
	if(is2pow(a))
		printf("YES");
	else
		printf("NO");
  
return 0; 
}
//-----------------------------------
int is2pow(int n)
{

	if(n==1)
		return 1;
	
	if(n%2!=0)
		return 0;
			
	return is2pow(n/2);


}	
