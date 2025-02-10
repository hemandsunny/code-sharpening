#include<stdio.h>
//check for palindrome and armstrong number
int checkPalinromeArmstrong(int a);

void main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    checkPalinromeArmstrong(n);

}

int checkPalinromeArmstrong(int a)
{
    int temp=0,tsum=0;
    int b=a;
    while(a!=0)
    {
        temp=temp*10+(a%10);
        tsum=tsum+((a%10)*(a%10)*(a%10));
        a=a/10;
    }
    if(tsum==b)
    {
        printf("%d is  armstrong number.\n",b);
    }
    else
    {
        printf("%d is  NOT armstrong number.\n",b);
    }
    if(temp==b)
    {
        printf("%d is  palindrome number.\n",b);
    }
    else
    {
        printf("%d is  NOT palindrome number.\n",b);
    }
    
    return 0;
}
