#include <stdio.h>
#include <math.h>

int hhh(int n)
{
	int a;
	for(a=2 ; a< n ; a++)
		if (n%a == 0)
		{		return 0;}
		return 1;

}

int main()
{	int  i;

	for(i=100 ; i<=200 ;i++)
		if (hhh(i))
			printf("%d ",i);
	return 0;

}

