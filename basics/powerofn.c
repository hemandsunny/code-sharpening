#include <stdio.h>
//to find power of n

void main()
{
    int n,p,power_prod=1;
    printf("enter a number and power : \n");
    scanf("%d %d",&n,&p);
    
    for(int i=0;i<p;i++)
    {
        power_prod*=n;
    }
    printf("power of %d = %d",n,power_prod);
    return;
}