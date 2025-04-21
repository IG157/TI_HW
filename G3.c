
#include <stdio.h>
#include <string.h>

#define SIZE 1000

int main (void)
{
	
	FILE *fl;
	char str[SIZE];
	int i;
	
	//--------input.txt--------------------
	fl=fopen("input.txt","r");
	
		if(fl==NULL)
			return 1;

		while ((str[i] = fgetc(fl)) != EOF) {
		if(str[i]!='\n')
			i++;
		}
		
	fclose(fl);
	
	i--;
	
	//--------------------------------------
	//----------output.txt------------------
		
	fl=fopen("output.txt","w");
	
	for(int j=0;j<i;j++)
		if(str[j]==str[i])
			fprintf(fl,"%d ",j);
		
	fclose(fl);
	
return 0; 
}
