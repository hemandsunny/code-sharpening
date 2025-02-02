#include <stdio.h>
//hackerrank - functions
int max(int x,int y);
int max_of_four(int a,int b,int c , int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    return y;
}

int max_of_four(int a, int b, int c,int d)
{
    int maxnum;
    maxnum=max(a, max(b,max(c, d)));
    return maxnum;
}
