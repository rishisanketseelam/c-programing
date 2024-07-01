#include <stdio.h>
void main () {
	int m1[3][3]={
		          {1,2,3},
	                  {4,5,6},
			  {7,8,9}
	                 };
	int m2[3][3]={
                          {1,2,3},
                          {4,5,6},
                          {7,8,9}
                         };
	int m3[3][3];
	int i, j, k, x;
	printf("Matrix 1 is:\n");
      	for(i=0;i<3;i++){
                printf("|");
                for(j=0;j<3;j++){
                        printf(" %d ", m1[i][j]);

                }
           printf("|\n");
        }
	printf("\n\n\n");
	printf("Matrix 2 is:\n");
	for(i=0;i<3;i++){
		printf("|");
		for(j=0;j<3;j++){
			printf(" %d ", m2[i][j]);

		}
	   printf("|\n");
	}
	printf("\n\n\nmatrix addition:\n");
	for(i=0;i<3;i++){
                printf("|");
                for(j=0;j<3;j++) {
			x=0;
			for(k=0;k<3;k++){
			x= x+(m1[i][k]*m2[k][j]);
			}
			 m3[i][j]=x;
		     printf("\t%d\t", m3[i][j]);
                }
		printf("|\n");
	}
}
