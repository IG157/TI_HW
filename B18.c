# include <stdio.h>


int main(void){
	
	int a,fb,f,c;
	
	scanf("%d",&a);
	
	if (a<=0)
		{printf("0"); return 0;}
		
	if (a==1)
		{printf("1 "); return 0;}

	printf("1 1 ");
		
	for(int i=3,fb=1,f=1;i<=a;i++){
		
		c=fb+f;				
		fb=f;
		f=c;
		
		printf("%d ",c);
	}
		
return 0;
}	

