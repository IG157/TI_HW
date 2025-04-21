
#include <stdio.h>
#include <string.h>

#define SIZE 1000

int main (void)
{
	
	FILE *fl;
	char c,cl[SIZE];
	int st,j;
	
	
	st=0;
	j=1;
	//--------input.txt--------------------
	fl=fopen("input.txt","r");
	
		if(fl==NULL)
			return 1;
		
		
		do{ 
			c= fgetc(fl);
							
			
			if(c==' ' || c==EOF){
				if(j==0)
					{cl[st]='\n';j++;st++;}
			}
			else		
				{cl[st]=c; st++;j=0;}
			
				
			if(c=='\n')
				break;
			
			
							
		}while(c!= EOF);	
		
	fclose(fl);

	//for(int i=0;i<st;i++)
	//	printf("%c",cl[i]);
	//printf("%s",cl);
	//--------------------------------------
	//----------output.txt------------------
		
	fl=fopen("output.txt","w");
		
		for(int i=0;i<st;i++)
			fprintf(fl,"%c", cl[i]);	
	
	fclose(fl);
	
return 0; 
}
//-----------------------------------------
