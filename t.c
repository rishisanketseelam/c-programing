#include <stdio.h>
void main () {
	if(1||1){
		printf("TRUE OR TRUE\n");
	}
	if(1||0){
                printf("TRUE OR FALSE\n");
        }
	if(0||1){
                printf("FALSE OR TRUE\n");
        }
	if (!(0||0)){
                printf("FALSE OR FALSE\n\n\n\n");
        }
	if(1&&1){
                printf("TRUE AND TRUE\n");
        }
        if (!(1&&0)){
                printf("TRUE AND FALSE\n");
        }
        if(!(0&&1)){
                printf("FALSE AND TRUE\n");
        }
        if(!(0&&0)){
                printf("FALSE AND FALSE\n");
        }

}       
