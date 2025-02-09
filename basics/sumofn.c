#include<stdio.h>
//sum of n natural numbers
void main()
{
    int a,sum=0,i;
    printf("enter a number : ");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        sum=sum+i;
    }
    printf("sum = %d\n",sum);
    return;
}