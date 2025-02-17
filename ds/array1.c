/*
Input: arr[] = [10, 20, 30, 40, 50]
Output: 10 30 50
Explanation: Print the first element (10), skip the second element (20), print the third element (30), skip the fourth element(40) and print the fifth element(50).


Input: arr[] = [-5, 1, 4, 2, 12]
Output: -5 4 12

*/
#include <stdio.h>
int getAlternates(int a[],int n);

int main()
{
    int ar[]={10,20,30,40,50};
    int s=sizeof(ar)/sizeof(ar[0]);
    getAlternates(ar,s);
    return 0;
}

int getAlternates(int a[],int n)
{
    int i;
    
    for(i=0;i<n;i+=2)
    {
        printf("%d\t",a[i]);
    }
    return 1;
}