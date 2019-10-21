#include <stdio.h>

int min_of(const int v[],int n)
{	
	int min,i;
	min = v[0];

	for (i=0;i<n;i++)
		if (min < v[i+1])
			min = min;
		else
			min = v [i+1];
	return min;
}

int main (void)
{
	int i,n;
	printf("请输入元素个数：。");	scanf("%d",&n);

	int v [n];
	for (i=0;i<n;i++)
	{		printf("v[%d]=",i);	scanf("%d",&v[i]);}

	printf("最小值%d\n",min_of(v,n));

	return 0;
}

