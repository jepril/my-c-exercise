#include <stdio.h>

int main()
{
	int i,n,sum;
	
	puts("完数是：");
	
	for(n=1;n<=1000;n++)
	{
		sum=0;
		for(i=1;i<n;i++)
		{	if(n%i==0)
			{sum +=i;}}
		if(sum == n)
		printf("%4d",n);}

	return 0;
}
