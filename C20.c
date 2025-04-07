#include <stdio.h>
#include <stdlib.h>

int skobki(char c);

int main(void){

	char s;
	int sum,fl;
	
	sum=1;
		
	for(fl=1;(s=getchar())!='.';){
		
		if(skobki(s)==fl)
			{fl=2; sum=0;}
		
		if(fl==2)
			sum+=skobki(s);
	}	
	
	if(sum)	
		printf("NO");
	else
		printf("YES");
	
return 0;
}
//-------------------------------

int skobki(char c){
	
	switch (c)
	{
		case '(':
			return 1;
			break;
		case ')':
			return -1;
			break;
	}//switch c

return 0;
}		


