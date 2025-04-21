
#include <stdio.h>
#include <string.h>

#define SIZE 100

struct bukva{
				char sim;
				int k;
		    };


void skr(int,struct bukva*);
void compare(int,char*);


int main (void)
{
	
	FILE *fl;
	struct bukva str[SIZE],str1[SIZE];
	char str2[SIZE],c;
	int i,j,l,m,st;
	
	i=j=st=0;
	//--------input.txt--------------------
	fl=fopen("input.txt","r");
	
		if(fl==NULL)
			return 1;

		while ((c= fgetc(fl)) != EOF) {
		
			if(c==' ')
				{st=1;j=i;i=0;continue;}
			
			if(st)
				{str1[i].sim=c; str1[i].k=0;}
			else
				{str[i].sim=c; str[i].k=0;}		
				
			if(c!='\n')
				i++;
		}
		
	fclose(fl);
	
	skr(j,str);
	skr(i,str1);

	for(l=0,st=0;l<j;l++)
		if(str[l].k==1)
			for(m=0;m<i;m++)
				if(str1[m].k==1)
					if(str[l].sim==str1[m].sim)
						{str2[st]=str[l].sim; st++;}
				
	
	compare(st, str2);
			
	str[0].sim=' ';	
	//--------------------------------------
	//----------output.txt------------------
		
	fl=fopen("output.txt","w");
	
	for(int j=0;j<st;j++)
		if(str2[j]>='a' && str2[j]<='z'){
			fputc(str2[j],fl);
			fputc(str[0].sim,fl);
		}
		
	fclose(fl);
	
return 0; 
}
//-----------------------------------------
void skr(int n,struct bukva b[])
{
	int s,j;
	
	for(int i=0;i<n;i++){
		for(j=0,s=0;j<n;j++){
			if(b[i].sim==b[j].sim)
				s++;
		}

		b[i].k=s;			
	}	
}
//-----------------------------------------
void compare(int n, char b2[])
{
	//sort----------------------------------------------------
	for(int i=0;i<n-1;i++)	
			for(int j=i+1;j<n;j++)
				if(b2[i]>b2[j])
					{char c=b2[i]; b2[i]=b2[j];b2[j]=c;}
	
}	
