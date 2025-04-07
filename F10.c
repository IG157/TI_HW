
#include <stdio.h>
#include <string.h>

#define SIZE 1000


int main (void)
{
	
	int i,k;
	char c,a[SIZE];
	
		
	for(i=0;(c=getchar())!='.';i++){
		if(c>='a' && c<='z')
			a[i]=c;
	}
	
	a[i]=c;
	
	
	for(int j=1,k=0;j<i+1;j++){
		if(a[j]==a[j-1])
			k++;
		else	
			{printf("%c%d",a[j-1],++k);k=0;}
	}

return 0; 
}
//-----------------------------------
	
