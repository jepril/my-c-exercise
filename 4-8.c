#include <stdio.h>

int main (void)

{
        int i;

        printf("请输入一个正整数。");
        scanf("%d",&i);
      while(i-->1)
                putchar('*');
	putchar('\n');
        return 0;
}

