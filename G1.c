
#include <stdio.h>
#include <string.h>


#define SIZE 100
#define CNT 3


int main (void)
{
	
	FILE *fl;
	char str[SIZE],num[3];
	int i=0;
	int j=0;
	int k=0;
	
	//--------input.txt--------------------
	fl=fopen("input.txt","r");
	
	if(fl==NULL)
		return 1;

	while ((str[i] = fgetc(fl)) != EOF) {
		if(str[i]!='\n')
			i++;
    }
	
	fclose(fl);
	//--------------------------------------
	//----------output.txt------------------
	if(str[i]==EOF)
		{str[i]=',';str[i+1]=' ';}
	
	fl=fopen("output.txt","w");
	
	fputs(str, fl);
	fputs(str, fl);
    
		str[i]=' ';
		//-----перевод числа в строку-------
		k=i;	
		
		do{
			num[j]=k%10;
			j++;
		}while(k/=10);
		
		while(j--){
			i++;
			str[i]=num[j]+'0';
		}	
		//---------------------------------
	str[i+1]='\0';
	
	fputs(str, fl);
    
	fclose(fl);
	
return 0; 
}
