#include <stdio.h>
void main(){
	int s;
        printf("Enter time in seconds:");
	scanf("%d",&s);
	// into min, take s and divde it by 60 and also mod by 60.
	printf("Minutes: %d min and %d sec.",(s/60),(s%60));
	printf("Hours: %d hours and %d min.",(s/3600),(s%3600));
}
