#include <stdio.h>
void main() {
	float x, y;
	printf("Please enter the desired values of x and y respectively:");
	scanf("%f %f",&x, &y);
	printf("The values of x nd y are : %f and %f\n",x ,y);
	//expressions
	printf("operation 1 : %f\n operation 2: %f\n operation 3 : %f\n ", (x+y)/(x-y), (x+y)/2, ((x+y)*(x-y)));
}

