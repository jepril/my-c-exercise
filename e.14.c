#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,n;

	printf("请输入一个正数");
	scanf("%d",&n);
	
	for(a=1;a<=sqrt(n);a++)
	{	if(n%a==0)
		b=n/a;
		printf("%d,%d\n",a,b);
	}

	return 0;
}

