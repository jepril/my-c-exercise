#include <stdio.h>

int main(void)

{
	int i=0;
	int sum=0;
	int n;

	printf("请输入一个整数:");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		sum=sum+i;
	}

	sum=sum+i;

	printf("1到%d的和是：%d\n",n,sum);

	return 0;
}
