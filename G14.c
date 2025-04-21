
#include <stdio.h>
#include <string.h>

#define SIZE 100

int main (void)
{
	
	FILE *fl;
	char c;
	char fn[SIZE];
	char sn[SIZE];
	int st,j,k,l;
	
	
	st=j=k=l=0;
	
	//--------input.txt--------------------
	fl=fopen("input.txt","r");
	
		if(fl==NULL)
			return 1;
		
		
		do{ 
			c= fgetc(fl);
	
			if(c=='\n')	
			break;
			
			switch (st)
			{
					case 0:
							fn[j]=c;
							j++;
							break;
					case 1:
							sn[k]=c;
							k++;
							break;
					default:		
							break;
			}
			
			if(c==' ')
				st++;
		
		}while(c!= EOF);	
		
	fclose(fl);

	fn[j-1]='!';
	
	//----------output.txt------------------
		
	fl=fopen("output.txt","w");
		
		fprintf(fl,"%s","Hello, ");
		
		for(int i=0;i<k;i++)
			fprintf(fl,"%c", sn[i]);
				
		for(int i=0;i<j;i++)
			fprintf(fl,"%c", fn[i]);
					
				
	
	fclose(fl);
	
return 0; 
}
//-----------------------------------------
