#include <stdio.h>
#include <stdlib.h>

int num(int, int);

int main(void){

	int a,i,j;
	
	scanf("%d",&a);
	
	if (a==0){
		printf("%d",0);
		return 0;
	}	
	
	j=1;
	
	for(i=0;i<=a;){
	
		i+=num(j++,a-i);
	}
	
			
return 0;
}
//-------------------------------

int num(int n,int k){
	
	if(k<n){
		for(int c=1;c<=k;c++)
			printf("%d ",n);
	}
	else{
		for(int c=1;c<=n;c++)
			printf("%d ",n);
	}
		
	return n;
}		

	

