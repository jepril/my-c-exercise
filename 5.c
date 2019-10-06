#include <stdio.h>

int main(void)
{
	int n1,n2,n3;
	int w;

	puts("请输入三个整数。");
	printf("整数1:");           scanf("%d",&n1);
	printf("整数2:");           scanf("%d",&n2);
	printf("整数3:");           scanf("%d",&n3);

	w = n1 + n2 + n3;
	printf("他们的和是%d。\n",w);
	return 0;
}
