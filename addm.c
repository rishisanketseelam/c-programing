#include <stdio.h>
void main () {
	int matrix1[3][3]={
		          {1,2,3},
	                  {4,5,6},
			  {7,8,9}
	                 };
	int matrix2[3][3]={
                          {1,2,3},
                          {4,5,6},
                          {7,8,9}
                         };
	int i, j;
	printf("Matrix 1 is:\n");
      	for(i=0;i<3;i++){
                printf("|");
                for(j=0;j<3;j++){
                        printf(" %d ", matrix1[i][j]);

                }
           printf("|\n");
        }
	printf("\n\n\n");
	printf("Matrix 2 is:\n");
	for(i=0;i<3;i++){
		printf("|");
		for(j=0;j<3;j++){
			printf(" %d ", matrix2[i][j]);

		}
	   printf("|\n");
	}
	printf("\n\n\nmatrix addition:\n");
	for(i=0;i<3;i++){
                printf("|");
                for(j=0;j<3;j++){
                        printf("%d\t", matrix1[i][j]+matrix2[i][j]);

                }
		printf("|\n");
	}
}
