
#include <stdio.h>
#include <string.h>

#define SIZE 1000

int prov(char,int,char*);

int main (void)
{
	
	FILE *fl;
	char c,bk[SIZE];
	int j,k;
	
	j=k=0;
	
	//--------input.txt--------------------
	fl=fopen("input.txt","r");
	
		if(fl==NULL)
			return 1;

		while ((c= fgetc(fl)) != EOF) {

			
			if((c>='a' && c<='z')||(c>='A' && c<='Z'))
				if(prov(c,k,bk)==0)
					{bk[k]=c;k++;}	
			
				
			if((j++)>SIZE)	
				return 1;
		}	
		
	fclose(fl);

	bk[k]='\0';
	//printf("%s",bk);
	//--------------------------------------
	//----------output.txt------------------
		
	fl=fopen("output.txt","w");
	
		fprintf(fl,"%s", bk);	
	
	fclose(fl);
	
return 0; 
}
//-----------------------------------------
int prov(char s, int n, char b[])
{
	int j=0;
	for(int i=0; i<n;i++)	
		if(b[i]==s)
			j++;
return j;			
}	
