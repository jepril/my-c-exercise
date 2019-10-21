#include <stdio.h>
#include <math.h>

double pfg(double a, double b)
{
	double x = a;
	double mid = (a+b)/2;

	while (fabs(mid * mid - x ) > 1e-6)
{		mid = (a + b)/ 2;
		if( mid * mid > x)
		       a = mid;
		else if (mid * mid < x)
			b=mid;	
		else if (mid * mid == x)
		       return mid;	
}
	return mid;
}
double main (void)
{	double a;
	double b = 0.000;

	puts("求平方根");
	printf("请输入一个正数:");
	scanf("%lf",&a);

	if (a >= 0)
		printf("平方根为:%f",pfg(a,b));
	else
		printf("该数小于0!!!!");
	return 0;
}
