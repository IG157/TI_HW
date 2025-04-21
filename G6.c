
#include <stdio.h>
#include <string.h>

#define SIZE 1000

int is_palindrom(char*);


int main (void)
{
	
	FILE *fl;
	char str[SIZE],c;
	int i=0,j;
	
	
	//--------input.txt--------------------
	fl=fopen("input.txt","r");
	
		if(fl==NULL)
			return 1;

		while ((c= fgetc(fl)) != EOF) {
		
			str[i]=c;
				
			if(c!='\n')
				i++;
		}
		
	fclose(fl);

	
	for(j=0;j<i;j++)
		if(str[i]=='\n')
			str[i]='\0';
	
	//--------------------------------------
	//----------output.txt------------------
		
	fl=fopen("output.txt","w");
	
		if(is_palindrom(str))
			fputs("YES",fl);
		else
			fputs("NO",fl);	
	
	
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
