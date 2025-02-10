#include <stdio.h>

void main()
{
    int n,i,fact=1;
    printf("enter a value : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("factorial of %d = %d\n",n,fact);
    return;
}