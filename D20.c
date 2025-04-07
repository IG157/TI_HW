#include <stdio.h>

int recurs_power(int, int);

int main (void)
{
	int a,b;
	
	scanf("%d %d",&a,&b);
	
	if(a<-100 || a>100)
		return 0;
	
	if(b<0 || b>100)
		return 0;
		
	if (b==0){
		printf("%d",1);
		return 0;
	}	
	printf("%d",recurs_power(a,b));

return 0; 
}
//-----------------------------------
int recurs_power(int n, int p)
{
	if(p==1)
		return n;
		
	return recurs_power(n, p-1)*n;
      
}	
