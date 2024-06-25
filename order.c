#include <stdio.h>
void main () {
	float DR, SC, HC, EOQ, TBO,A ,B ,C;
	printf("Enter the demand rate of the product:\n");
	scanf("%f",&DR);
	printf("Enter the setup costs of the product:\n");
	scanf("%f",&SC);
        printf("Enter the Holding cost of the product:\n");
        scanf("%f",&HC);
	A= 2*DR*SC;
	EOQ= (A/HC)*0.5;
	B= 2*SC;
	C= DR*HC;
	TBO= (B/C)*0.5;
	printf("The Economic order quantity is:%f\n",EOQ);
	printf("The Time between orders is:%f\n",TBO);
}
		
