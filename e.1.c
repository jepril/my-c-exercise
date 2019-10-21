#include <stdio.h>

double main(void)
{
	double	a,b,c;
	
	printf("请输入三个数字\na=\nb=\nc=\n");
	scanf("%lf%lf%lf",&a,&b,&c);

	printf("三数之和为：%f",a + b + c);

	return 0;
}
