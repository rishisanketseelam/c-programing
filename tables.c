#include <stdio.h>
void main() {
	int num , i;
	printf("Please enter the number you want to calculate the table for :");
	scanf("%d",&num);
        	for(i=0;i<=10;i++) {
		  printf("%d X %d = %d\n",num,i,num*i);
         	}
	printf("\nThis is the %d table multiplied till the order of 10\n", num);
}
