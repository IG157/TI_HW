
#include <stdio.h>
#include <string.h>

#define SIZE 100

int main (void)
{
	
	FILE *fl;
	char c,cl[SIZE];
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
			
			cl[st]=c;
			st++;
				
		}while(c!= EOF);	
		
	fclose(fl);

	
	for(int i=st;i;i--){
		
		if(cl[i]=='/')
			{k=i; break;}
		
		if(cl[i]=='.')
			{l=i;break;}
	
	}	
	
	
	
	if(l>k)
		{cl[l+1]='h';cl[l+2]='t';cl[l+3]='m';cl[l+4]='l'; st=l+5;}
	else	
		{cl[st++]='.';cl[st++]='h';cl[st++]='t';cl[st++]='m';cl[st++]='l';}
	
	
	//----------output.txt------------------
		
	fl=fopen("output.txt","w");
		
		for(int i=0;i<st;i++)
			fprintf(fl,"%c", cl[i]);	
	
	fclose(fl);
	
return 0; 
}
//-----------------------------------------
