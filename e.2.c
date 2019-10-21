#include <stdio.h>

int main(void)
{	
	int	a,b,c,d,e,f;
	int 	n;

	printf("请输入一个四位整数：");
	scanf("%d",&n);

	a = n / 1000;
	b = n % 1000;
	c = b / 100;
	d = b % 100;
	e = d / 10;
	f = d % 10;

	printf("千位：%d\n百位：%d\n十位：%d\n个位：%d",a , c , e , f);

	return 0;
}
