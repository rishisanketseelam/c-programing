#include <stdio.h>

void main() {
	int integ;
	float dec;
        char letter;
	char string[10];
	printf("Please enter an integer/number :");
	scanf("%d",&integ);
	printf("Please enter a decimal value :");
	scanf("%f",&dec);
	printf("Please enter a letter/character value :");
	scanf("%s",&letter);
	printf("Please enter a string or a list of characters :");
        scanf("%c",&string;
	printf("\nThe integer you have entered is %d \n", integ);
	printf("The float value entered is %f\n ",dec);
	printf("The letter you have entred is %c\n",letter);
	printf("The string of charachters entred is %c\n",string);
}

