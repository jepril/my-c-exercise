#include <stdio.h>

int main (void)

{
        int i,a;

        printf("请输入一个正整数。");
        scanf("%d",&i);

        a=0;
        while(a<i)
	{	if(++a%2)
		putchar('+');
		else
		putchar('-');}
        putchar('\n');

        return 0;
}

