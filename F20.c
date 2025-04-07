
#include <stdio.h>
#include <string.h>


#define SIZE 10

char chetn(int, int*);
void dec(int, int*);

int main (void)
{
	
	int i,a[SIZE];
	
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);
	
	if(chetn(SIZE,a)){
		
		for(i=0;i<SIZE;i++)
			if(a[i]%2==0)
				dec(0,&a[i]);
	}			
	else{	
		
		for(i=0;i<SIZE;i++)
			if(a[i]%2)
				dec(1,&a[i]);
	}	
	
	for(i=0;i<SIZE;i++)
		printf("%d ",a[i]);

return 0; 
}
//-----------------------------------
char chetn(int n,int b[])
{
	
	int ch=0;
	int nch=0;
	
	
	for(int i=0;i<n;i++){
		if(b[i]%2)
			nch++;
		else
			ch++;
	}		

	if(nch>=ch)
		return 1;
	else
		return 0;	
}	
//------------------------------------
void dec(int ch, int* p)
{

	int num=*p;
	int h=1;
	
	if(ch){

		do{
			if((num%10)%2)
				h*=(num%10);
	
		}while(num/=10);		
	}
	else{

		do{
			if((num%10)%2==0)
				h*=(num%10);
	
		}while(num/=10);		
	}	
	
	*p=h;
}	
