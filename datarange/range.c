
#include <stdio.h>
void main()
{
	char char1[]="asfasf";
      /*	unsigned char char2= "sagadfgdf";  */
       	int int1= 123;
	short int int2 = 239;
	short int intZero = 0;
	unsigned short int int3= 254;
	long int int4= 2134122133;
	unsigned long int int5= 134123534534234;
	float float1 = 24.6;
	double double1= 124234.234234;
	long double LD1= 12451345.2345345;
	printf("-----------------------------------------------------------------\n");
	printf("|char\t\t\t\t\t|%s\t\t\t|\n",char1);
/*	printf("-----------------------------------------------------------------\n");
      	printf("|unsignedchar\t\t|%c\t\t\t|\n",char2);*/
        printf("-----------------------------------------------------------------\n");
        printf("|int\t\t\t\t\t|%d\t\t\t|\n",int1);
        printf("-----------------------------------------------------------------\n");
        printf("|shortint\t\t\t\t|%d\t\t\t|\n",int2);
        printf("-----------------------------------------------------------------\n");
        printf("|usgnshrtint\t\t\t\t|%d\t\t\t|\n",int3);
        printf("-----------------------------------------------------------------\n");
        printf("|long int\t\t\t\t|%ld\t\t|\n",int4);
        printf("-----------------------------------------------------------------\n");
        printf("|float \t\t\t\t\t|%f\t\t|\n",float1);
        printf("-----------------------------------------------------------------\n");
        printf("|double \t\t\t\t|%2f\t\t|\n",double1);
        printf("-----------------------------------------------------------------\n");

}
