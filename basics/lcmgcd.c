#include<stdio.h>
//find lcm gcd of two numbers


int findHCF(int n1,int n2);
int findLCM(int n1,int n2,int h2);

void main()
{
    int a,b,lcm,hcf;
    printf("enter 2 numbers : \n");
    scanf("%d %d",&a,&b);
    
    if(a>b)
    {
        hcf=findHCF(a,b);
    }
    else
    {
        hcf=findHCF(b,a);
    }
    lcm=findLCM(a,b,hcf);
}

int findHCF(int n1,int n2)
{
    while(n2!=0)
        {
            int rem=n1%n2;
            n1=n2;
            n2=rem;
        }
        printf("HCF = %d\n",n1);
        return n1;
}

int findLCM(int n1,int n2,int h2)
{
    int l2=(n1*n2)/(h2);
    printf("LCM = %d\n",l2);
    return 0;
}
