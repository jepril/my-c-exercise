#include <stdio.h>

int main (void)

{
	int a,i;

	printf("请输入一个正整数。");
	scanf("%d",&a);
	
	i=0;
	while(i+2<=a)
		printf("%d",i=i+2);

	return 0;
}

