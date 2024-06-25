#include <stdio.h>
void main(){
	float a,u,t,th;
	printf("Enter the initial velocity:\n");
	scanf("%f",&u);
	printf("Enter the value of acceleration:\n");
	scanf("%f",&a);
	printf("Enter the observed timeframe of the objects motion:\n");
	scanf("%f",&t);
	printf("\nDistance=%f\n",(float)((u*t)+((a*t*t)/2)));
	

}
