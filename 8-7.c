#include <stdio.h>

int combination(int n, int r)
{
	int y;
	if ( (r == 0) || (r == n))
	{	 y=1;}
	else  	if ( r == 1)
	{	 y=n;}
	else	
	{	 y= combination(n-1,r-1) + combination(n-1,r);}
	return y;
}

int main (void)
{
	int n,r;
	printf("n=");	scanf("%d",&n);
	printf("r=");	scanf("%d",&r);

	printf("组合数为%d",combination(n,r));

	return 0;
}
