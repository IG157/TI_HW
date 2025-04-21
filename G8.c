
#include <stdio.h>
#include <string.h>

#define SIZE 1000

void sort(int,int*);

int main (void)
{
	
	FILE *fl;
	char c;
	int i,j, st,num[SIZE],ch;
	
	i=j=ch=st=0;
	
	//--------input.txt--------------------
	fl=fopen("input.txt","r");
	
		if(fl==NULL)
			return 1;

		while ((c= fgetc(fl)) != EOF) {

			if(c>='0' && c<='9')
				{ch=ch*10+(c-'0'); st=1;} 
			
			if(st==1 &&( c<'0' || c>'9'))
				{num[i]=ch;ch=0,st=0;i++;}
			
			
			if((j++)>1000)	
				return 1;
		}	
		
	fclose(fl);

	sort(i,num);

	//--------------------------------------
	//----------output.txt------------------
		
	fl=fopen("output.txt","w");
	
		for(j=0;j<i;j++)
			fprintf(fl,"%d ", num[j]);	
	
	fclose(fl);
	
return 0; 
}
//-----------------------------------------
void sort(int n, int b[])
{
	
	for(int i=0; i<n-1;i++){	
		for(int j=i+1;j<n;j++)	
			if(b[j]<b[i])
				{int c=b[i];b[i]=b[j];b[j]=c;}
	}	
}	
