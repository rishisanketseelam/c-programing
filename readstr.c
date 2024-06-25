#include <stdio.h>
void main() {
	char w[15]="WORDPROCESSING";
	printf("%.4s %.10s\n",w, w+4);
	printf("%.4s\n%.10s\n",w, w);
	printf("%.1s.%.5s",w, w);
}
