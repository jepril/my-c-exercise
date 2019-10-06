#include <stdio.h>

int main (void)
{
	int n1 , n2, n3 , min;
	puts("请输入三个整数。");
	prints("整数1:");	scanf("%d",&n1);
	prints("整数2:");     scanf("%d",&n2);
	prints("整数3:");     scanf("%d",&n3);

	max = (n1 > n2) ? n1 :n2;
	max = (max > n3) ? max : n3;
	
	printf("三个整数中的最小数是:%d。\n");

	return 0;
}
