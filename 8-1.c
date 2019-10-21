#include <stdio.h>

#define  diff(x,y)    ( (x)-(y) )

int main (void)
{
    int a,b;
    printf("a=");           scanf("%d",&a);
    printf("b=");           scanf("%d",&b);

    printf("两数之差:%d",diff(a,b));
    return 0;
}