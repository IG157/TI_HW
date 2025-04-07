#include <stdio.h>

int nod(int, int); 

int main(void){

	int a,b;
	
	scanf("%d %d",&a,&b);

	printf("%d",nod(a,b));



return 0;
}




int nod(int x, int y) {
    if(x == y) return x;
    if(x > y) return nod(x-y, y);
    return nod(x, y-x);
}
