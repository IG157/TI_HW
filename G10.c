
#include <stdio.h>
#include <string.h>

#define SIZE 1001

void cop(int,char*,char*);

int main (void)
{
	
	FILE *fl;
	char c,sl[SIZE],slrez[SIZE];
	int j,k,i;
	
	j=k=i=0;
	
	//--------input.txt--------------------
	fl=fopen("input.txt","r");
	
		if(fl==NULL)
			return 1;

		do {

			c= fgetc(fl);
			
			if(c==' ' || c==EOF){
				if(k<i)
					{cop(i,sl,slrez);k=i;}
				i=0;
			}
			else{
				slrez[i]=c;
				i++;
			}
				
			if((j++)>SIZE)	
				return 1;
		}while(c!=EOF);	
	
	fclose(fl);
	
	sl[k]='\0';
	
	//--------------------------------------
	//----------output.txt------------------
			
	fl=fopen("output.txt","w");
	
		fprintf(fl,"%s", sl);	
	
	fclose(fl);
	
return 0; 
}
//-----------------------------------------
void cop(int n,char b[],char brez[])
{
	
	for(int i=0;i<n;i++)
		b[i]=brez[i];
	
}	
