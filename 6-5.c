#include <stdio.h>

int sum(int n,int m)
{ 	m=0;	
	int i;
	for (i = 1; i <= n;i++ )
	{
		m+=i;
	}
	return m;
}

int main(void)
{	int n;
	int m;
	printf("n=");	scanf("%d",&n);
	printf("1到n之间所有整数的和：%d。\n",sum(n,m));

	return 0;
}

