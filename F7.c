/*
#include <stdio.h>
#include <string.h>

#define SIZE 100

int compression(int*, int*, int);

int main (void)
{
	int i,l;
	int a[SIZE],b[SIZE];
		
	for(i=0;i<SIZE;i++)					
		scanf("%d",&a[i]);

	l=compression(a, b, i);
	//for(int j=0;j<l;j++)
	//	printf("%d ",b[j]);
	printf("%d ",l);	
			
return 0; 
}
//-----------------------------------
*/
int compression(int a[], int b[], int N)
{
	int i,j,nl,ed;
	
	//--------------------
	
	if(a[0])
		{b[0]=0;i=2;j=1;nl=0;ed=1;}
	else
		{i=1;j=0;nl=0;ed=0;}	
	
	//---------------------
	
	
	for(;i<N;i++){
		
		if(a[i]==a[i-1])
			if (a[i])
				ed++;
			else	
				nl++;
		else
			if(a[i])		
				{b[j++]=nl+1; nl=0;}
			else
				{b[j++]=ed+1;ed=0;}	
		
	}

	
	if(a[--i])
		b[j]=ed+1;
	else
		b[j]=nl+1;	
			

return j+1;	
}	
