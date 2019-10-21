#include <stdio.h>

void rev_intary(int v[],int n)
{
	int i,a;
	
	for (i=0;i<n/2;i++)
		{ a = v [n-1-i];
		  v [n-i-1] = v [i];
		  v [i] = a;}
}

int main (void)
{
	int n,i;
	printf("数组元素个数：");	scanf("%d",&n);
	int v[n];
	for(i=0;i<n;i++)
	{	printf("v[%d]=",i);
		scanf("%d",&v[i]);
	}

	printf("倒序：\n");
	
	rev_intary(v,n);
	for(i=0;i<n;i++)
	printf("v[%d]=%d\n",i,v[i]);

	return 0;
}
