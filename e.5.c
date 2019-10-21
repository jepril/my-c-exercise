#include <stdio.h>
#include <math.h>

double main ()
{
	double a, b, c;

	puts("请输入两直角边");
	printf("a=");	scanf("%lf",&a);
	printf("b=");   scanf("%lf",&b);

	c=sqrt(a*a+b*b);

	printf("斜边为%f",c);
	return 0;
}
