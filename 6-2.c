#include <stdio.h>

int min3(int a, int b, int c)
{
	int n,m;
	n = (a>b)? b:a;
	m = (n>c)? c:n;
	return m;
}

int main (void)
{
	int a, b, c;


	puts("请输入三个整数。");
	printf("整数a：");	scanf("%d",&a);
	printf("整数b：");      scanf("%d",&b);
	printf("整数c：");      scanf("%d",&c);

	printf("最小值是：%d\n",min3(a , b, c));

	return 0;
}
