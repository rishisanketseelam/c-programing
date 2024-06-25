#include <stdio.h>
#include <math.h>
void main() {
	int i, a[10];
	//int b[]= int[] {1,2,3,4,5};
	for (i=0;i<10;i++){
		a[i]= rand(5);
	}
	for (i=0;i<10;i++){
		printf("%d----->%d\n",i,a[i]);
	}
}
