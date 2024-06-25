#include <stdio.h>
void main () {
	float a;
	float b;
	float c;
	float d;
	float m;
	float n;
	printf("Please enter the values of A, B and C : \n ");
	scanf("%f %f %f", a, b, c);
	printf("Please also enter the values for constants m an n: \n ");
	scanf("%f %f",m,n);
	if( (a*b-c*d)==0 ){
		printf("The values for a , b , c and d are invalid\n");
	}
	else {
		printf("The unique solution 1 is :\n ",(m*d-b*n)/(a*b-c*d));
		printf("The unique solution 2 is :\n ",(n*a-m*c)/(a*b-c*d));
	}


} 
