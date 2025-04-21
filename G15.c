
#include <stdio.h>
#include <string.h>

#define SIZE 1100

int main (void)
{
	
	FILE *fl;
	char c,d,e;
	char fn[SIZE];
	int st=0;
	

	//--------input.txt--------------------
	fl=fopen("input.txt","r");
	
		if(fl==NULL)
			return 1;
		
		
		do{ 
			c= fgetc(fl);
	
			if(c=='\n')	
			break;

				
			if(c=='C'){
				if((d=fgetc(fl))=='a'){
					if((e=fgetc(fl))=='o'){
						fn[st++]='L'; 
						fn[st++]='i'; 
						fn[st++]='n'; 
						fn[st++]='g';
						continue;
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
			
				
		}while(c!= EOF);	
		
	fclose(fl);



//	for(int i=0;i<st;i++)
//		printf("%c",fn[i]);
		
	//----------output.txt------------------
		
	fl=fopen("output.txt","w");
		
		for(int i=0;i<st;i++)
			fprintf(fl,"%c", fn[i]);
				
	
	fclose(fl);
	
return 0; 
}
//-----------------------------------------
