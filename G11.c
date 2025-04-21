
#include <stdio.h>
#include <string.h>

//#define SIZE 1000

int main (void)
{
	
	FILE *fl;
	char c,c1;
	int st=0;
	
	//--------input.txt--------------------
	fl=fopen("input.txt","r");
	
		if(fl==NULL)
			return 1;
		
		
		do{ 
			c= fgetc(fl);
							
			if(c==' ' || c==EOF ||c=='\n')
				if(c1=='a')
					st++;	
			
			c1=c;
				
		}while(c!= EOF);	
		
	fclose(fl);

	
	//printf("%d",st);
	//--------------------------------------
	//----------output.txt------------------
		
	fl=fopen("output.txt","w");
	
		fprintf(fl,"%d", st);	
	
	fclose(fl);
	
return 0; 
}
//-----------------------------------------
