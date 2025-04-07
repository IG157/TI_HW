#include <stdio.h>

int mod(int);
int stepen(int ,int);


int main(void){

	int n,p;
	
	scanf("%d %d",&n,&p);

	
	if(mod(n)>=1000)
		return 0;
	
	p=mod(p);
	if(p>=1000)
		p=1000;
	
	printf("%d",stepen(n,p));

return 0;
}

//возвращает модуль числа
int mod(int a){
	
return (a<0)?-a:a;		
}	

//возвращает степень числа
int stepen(int n, int p){
	
	int st;
	
	if(p==0)
		return 1;
	
	for(st=1;p;p--)
		st*=n;
	
return	st;
}	
