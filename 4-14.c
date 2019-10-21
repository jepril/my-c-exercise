#include <stdio.h>

int main(void)
{
	int a,b;
	int i,n;

	printf("请输入一个整数:");
	scanf("%d",&a);

		b = a / 10;
		a = a % 10;
	for (n=1;n<=b;n++)
		printf("1234567890");

	for (i = 0; i < a; i++) 
		printf("%d",i+1);
	

	return 0;
}

