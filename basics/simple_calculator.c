#include<stdio.h>
//simple calculator

int main()
{
    float a,b,d;int c;
    printf("enter the respective number for operation : \n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    scanf("%d",&c);
    printf("enter the numbers a & b \n");
    scanf("%f",&a);
    scanf("%f",&b);
    switch(c)
    {
        case 1:
        printf("Sum=%f\n",a+b);
        break;
        case 2:
        printf("Difference=%f\n",a-b);
        break;
        case 3:
        printf("Product=%f\n",a*b);
        break;
        case 4:
        d=a/b;
        printf("Quotient=%.2f\n",d);
        break;
        default:
        printf("invalid choice \n");

    }
    return 0;
}