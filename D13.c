#include <stdio.h>

void num(int);

int main (void)
{
    int a;
    
    scanf("%d",&a);
    num(a);
}
//-----------------------------------------------

void num(int n)
{
    if (n==1)
        return;
    
    int b=2;
    
    while (n%b != 0)
        b++;
    
    printf("%d ",b); 
    num(n/b);

}
