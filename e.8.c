#include <stdio.h>
#include <math.h>

double	dt(double a,double b,double c)
{
	double date;
	date = sqrt(b*b - 4*a*c);
}

double main()
{
	double a , b, c , date ;
	double x1, x2;

	printf("a*x*x + b*x +c,a,b,c=");
	scanf("%lf%lf%lf",&a,&b,&c);

	dt(a,b,c);
	x1 = (-b+date)/2*a;
	x2 = (-b-date)/2*a;

	printf("x1=%f,x2=%f",x1,x2);
	return 0;
}

