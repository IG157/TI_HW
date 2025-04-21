
#include <stdio.h>
#include <string.h>

#define SIZE 1000


int main (void)
{
	
	FILE *fl;
	char str[SIZE],c;
	int i;
	
	
	//--------input.txt--------------------
	fl=fopen("input.txt","r");
	
		if(fl==NULL)
			return 1;

		while ((c= fgetc(fl)) != EOF) {
		
			switch (c)
			{
				case 'a':{str[i]='b'; break;}	
				case 'b':{str[i]='a'; break;}
				case 'A':{str[i]='B'; break;}
				case 'B':{str[i]='A'; break;}
				default: str[i]=c;
				
			}	
				
			if(c!='\n')
				i++;
		}
		
	fclose(fl);

	str[i+1]='\0';
	
	//--------------------------------------
	//----------output.txt------------------
		
	fl=fopen("output.txt","w");
	
		fputs(str,fl);
		
	fclose(fl);
	
return 0; 
}
//-----------------------------------------
