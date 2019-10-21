#include <stdio.h>

double main()
{
	int n,i;
	double a;
	double sum=0.00;
	char s;

	puts("请输入个数");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("s[%d]=",i);
		scanf("%hhd",&s);
		sum += s;}

	a = 1.0*(sum/n);

	printf("平均数为%f",a);

	return 0;
}
