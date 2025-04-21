
#include <stdio.h>
#include <string.h>

#define SIZE 26

int main (void)
{
	
	FILE *fl;
	char str[SIZE], chet[4]={'2','4','6','8'};
	int i,j,num=0;
	
	//--------input.txt--------------------
	fl=fopen("input.txt","r");
	
		if(fl==NULL)
			return 1;

		fscanf(fl,"%d",&num);
		
	fclose(fl);
	
	if(num>26)
		return 1;
	//--------------------------------------
	//----------output.txt------------------
	for(i=0,j=0;i<num;i++,j++){
		str[i++]=j%25+65;
		str[i]=chet[j%4];
	}
	
	str[i]='\0';

	fl=fopen("output.txt","w");
	
		fputs(str, fl);
    
	fclose(fl);

return 0; 
}
