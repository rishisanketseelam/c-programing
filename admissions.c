#include <stdio.h>
void main () {
	int M, P, C, num, i;
	printf("How many students submitted records:  ");
	scanf("%d",&num);
	printf("Enter the marks of %d students: \n\n",num);
	for (i=1;i<=num;i++){
		scanf("%d %d %d",&M,&P,&C);
		if (M>=60 && P>=60 && C>=40) {
			printf("Congratulations!!!You have made it");
			num= num+1;
		}
		else {
			printf("Alas!Please try next year");
		}
	}
        printf(".");
}
