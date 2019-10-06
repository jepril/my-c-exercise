#include <stdio.h>
int main (void)
{
	int a,b;
	printf("请输入两个整数。");
	printf("整数a:");	scanf("%d",&a);
	printf("整数b:");	scanf("%d",&b);
	printf("x的值是y的%d%%",100*a/b);
	return 0;
}
