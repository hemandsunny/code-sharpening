#include<stdio.h>
//swap without temp variables
void main()
{
    int a=5,b=1;
    printf("before swap : (a,b) = (%d,%d)\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after  swap : (a,b) = (%d,%d)\n",a,b);
    return;
}