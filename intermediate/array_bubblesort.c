#include<stdio.h>
//sorting array using bubble sort
int main()
{
    int ar[10]={9,0,7,2,6,4,5,1,8,3};
    int n=10;
    int a,b,temp;
    for(int k=0;k<n;k++)
    {
       
    for(int i=1;i<=n-k-1;i++)
    {
        if(ar[i-1]>ar[i])
        {
            temp=ar[i];
            ar[i]=ar[i-1];
            ar[i-1]=temp;
        }
    } 
    }
    for(int j=0;j<10;j++)
    {
        printf("%d\t",ar[j]);
    }
}
