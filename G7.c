
#include <stdio.h>
#include <string.h>

#define SIZE 10000


int main (void)
{
	
	FILE *fl;
	char c;
	int st,pr,j;
	
	st=pr=j=0;
	
	//--------input.txt--------------------
	fl=fopen("input.txt","r");
	
		if(fl==NULL)
			return 1;

		while ((c= fgetc(fl)) != EOF) {
		
			if(c>='a'&& c<='z')
				st++;
			else if (c>='A'&& c<='Z')	
				pr++;
			
			
			if((j++)>10000)	
				return 1;
		}	
		
	fclose(fl);

	//--------------------------------------
	//----------output.txt------------------
		
	fl=fopen("output.txt","w");
	
		fprintf(fl,"%d %d", st,pr);	
	
	fclose(fl);
	
return 0; 
}
//-----------------------------------------
int is_palindrom(char a[])
{
	
	int j=0;
	
	while(a[j]!='\0')
		j++;
	
		
	for(int i=0;i<(j/2);i++)
		if(a[i]!=a[j-i-1])
			return 0;
	
return 1;	
}	
