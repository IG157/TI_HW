#include <stdio.h>

int middle(int , int);


int main(void){

	int a,b;
	
	scanf("%d %d",&a,&b);

	printf("%d",middle(a,b));

return 0;
}

//возвращает среднее значение
int middle(int c,int d){
	
return (c+d)/2;
}	
