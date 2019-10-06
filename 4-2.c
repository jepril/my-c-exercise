#include <stdio.h>

int main (void)
{       
	int a,b,c,d;
	int sum=0;

 	printf ("请输入两个整数。");
	printf("整数a:");		scanf ("%d",&a);
	printf("整数b:");         scanf ("%d",&b);

	if (a>b)
	{	a=a,b=b;}
	else {d=a,a=b,b=d;}
 	c=b;

	sum=sum+b;
	do{
		c=c+1;

		sum=sum+c;
	} while (c<a);

	printf("大于等于%d小于等于%d的所有整数和是%d。\n",b,a,sum);
	return 0;
}
