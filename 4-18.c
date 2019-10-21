#include <stdio.h>

int main (void)
{
	int a, b, c,d;

	printf("显示多少个*");
	scanf("%d",&a);
	
	b = a % 5;
	a = a / 5;

	for(c=1;c<=a;c++)
		printf("*****\n");

	for(d=1;d<=b;d++)
		printf("*");

	return 0;
}
