#include <stdio.h>
//count digits of a number
//sum of digits of  n

void main()
{
    int n,i=0,sum=0;
    printf("enter a number : ");
    scanf("%d",&n);
    int tmp=n;
    while(n!=0)
    {
        i++;
        sum+=n%10;
        n=n/10;

    }
    printf("number of digits in %d = %d \n",tmp,i);
    
    printf("sum of digits in %d = %d \n",tmp,sum);
}

