#include <stdio.h>

#define SIZE 1000

void prt_num(int , int*);

int main (void)
{
	int b[SIZE],i,c;
	
		
	for(i=0;(c=getchar())!='\n';i++)					
		b[i]=c-'0';

	prt_num(i, b);	

			
return 0; 
}
//-----------------------------------

void prt_num(int n, int a[])
{
	
	int i,j,k;
	
	for(i=0;i<10;i++){
		
		for(j=0,k=0;j<n;j++){		
			if(a[j]==i)
				k++;
		}	
	
		if(k!=0)
			printf("%d %d\n",i,k);
	}		
}	
