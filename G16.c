
#include <stdio.h>
#include <string.h>

#define SIZE 1100

int main (void)
{
	
	FILE *fl;
	char c,d,e,g;
	char fn[SIZE];
	int st=0;
	

	//--------input.txt--------------------
	fl=fopen("input.txt","r");
	
		if(fl==NULL)
			return 1;
		
		
		while((c= fgetc(fl))!= EOF){ 
			
	
			if(c=='\n')	
			break;

				
			if(c=='L'){
				if((d=fgetc(fl))=='i'){
					if((e=fgetc(fl))=='n'){
						if((g=fgetc(fl))=='g'){
							fn[st++]='C'; 
							fn[st++]='a'; 
							fn[st++]='o'; 
						continue;
						}
						else{
							fseek(fl,-3,SEEK_CUR);
							}			
					}
					else{
						fseek(fl,-2,SEEK_CUR);
					}	
				}
				else{
					fseek(fl,-1,SEEK_CUR);
				}	
			}
			
			fn[st++]=c;
			
		}	
		
	fclose(fl);


	//for(int i=0;i<st;i++)
	//	printf("%c",fn[i]);
		
	//----------output.txt------------------
		
	fl=fopen("output.txt","w");
		
		for(int i=0;i<st;i++)
			fprintf(fl,"%c", fn[i]);
				
	
	fclose(fl);
	
return 0; 
}
//-----------------------------------------
