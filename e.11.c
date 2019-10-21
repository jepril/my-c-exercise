#include <stdio.h>

int fun(int n)
{
	if ( n==1 || n==2)
	return 1;
	else
	return fun(n-2) + fun(n-1);
}

int main()
{
	int n,i;
	
	printf("n=");
	scanf("%d",&n);

	for( i=1; i<=n ; i++)
	{	printf("%d",fun(i));
}
	return 0;
}
