#include <stdio.h>

/*
int 4bytes %d
double 8bytes  %lf
float 4bytes %f
char 1byte %c
*/


int main()
{
    int age=25;
    double num=12.45;
    float num1=10.9f;
    printf("int : %d\n",age);
    printf("double - %.2lf\n",num);
    printf("float - %f\n",num1);

    return 0;
    
}