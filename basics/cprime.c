#include<stdio.h>
//check for prime number

void main()
{
    int a,f=0,i;

    printf("enter a number : ");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if (a%i==0)
        {
            f++;
        }
    }
    if(f>0){
        printf("%d is not prime.\n",a);

    }
    else
    {
        printf("%d is prime.\n",a);
    }

}
