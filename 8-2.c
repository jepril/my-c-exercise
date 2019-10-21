#include <stdio.h>

#define	max(x,y)	(((x) >(y)) ?  (x) : (y))

int main (void)
{
	int a, b, c, d;

	printf("a ,b , c , d=");	scanf("%d%d%d%d",&a,&b,&c,&d);

	printf("最大值：%d",max(max(a,b),max(c,d)));

	return 0;
}
