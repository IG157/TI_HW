#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
#define EPS 0.001

float sinus(float);
long int fl(long int); 
float stp(float,int);
float absn(float);

int main(void){

	int a;
	float rad;
	
	scanf("%d",&a);

	rad=a*PI/180;
	
	printf("%.3f\n",sinus(rad));

return 0;
}
//-------------------------------

long int fl(long int n){

	if(n==1||n==0)
		return 1;
		
	return n*fl(n-1);
}	
//--------------------------------

float stp(float n,int e){
	
	float g; 
	
	if(e==0)
		return 1;
		
	for(g=1;e;e--)
		g*=n;

	return g;
}
//--------------------------------

float absn(float c){

	if(c<0)
		return c*=-1;

	return c;
}
//--------------------------------

float sinus(float r){

	float ra, sumr;
	int i=1;
	int j=1;
	
	ra=r;
	
	while(absn(ra)>EPS){

		ra=stp(r,i)/fl(i);
		
		if(j)
			{sumr+=ra;j=0;}
		else
			{sumr-=ra;; j=1;}
		
		i+=2;
	}

	return sumr;
}	
	


