#include <stdio.h>
//hackerrank - pointer in c
void update(int *a,int *b)
{
    int origin_a=*a;
    
    
    *a= *a+*b;
    *b= origin_a-*b;
    if(*b<0)
    {
        *b=*b*-1;
    }
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
