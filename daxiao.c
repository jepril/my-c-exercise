#include <stdio.h>

int main()
{
	int a, b, max , min;

	printf("a,b=");
	scanf("%d%d",&a,&b);

	if (a==b)
	printf("a=b");
	else
		{if (a>b)
		{	max=a;
			min=b;}
		else
		{	max=b;
			min=a;}
		printf("%d和%d大的是%d小的是%d",a,b,max,min);}

	return 0;
}
