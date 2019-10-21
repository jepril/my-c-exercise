#include <stdio.h>

int main(void)
{
    int i;
    static double s[5];

    for (i = 0; i < 5; i++)
        printf("s[%d] = %0.1f\n",i,s[i]);

    return 0;
    }
