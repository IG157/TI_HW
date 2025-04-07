/*
#include <stdio.h>
#include <string.h>

#define SIZE 100

void print_digit(char s[]);

int main (void)
{
	int i,c;
	char b[SIZE];
		
	for(i=0;(c=getchar())!='\n';i++)					
		b[i]=c;


	
	print_digit(b);	

			
return 0; 
}
//-----------------------------------
*/
void print_digit(char s[])
{
	
	int i,j,k;
	
	for(i=0;i<10;i++){
		
		for(j=0,k=0;j<strlen(s);j++){		
			if(s[j]>='0' && s[j]<='9')
				if((s[j]-'0')==i)
					k++;
		}	
	
		if(k!=0)
			printf("%d %d\n",i,k);
	}		
	
	
}	
