#include <stdio.h>

int cube(int x)
{	
	return x*x*x;
}

int main(void)
{
	int x;

	printf("整数x：");
	scanf("%d",&x);

	printf("%d的立方%d。\n",x,cube(x));
	return 0;
}
