#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,n;

	printf("n=");
	scanf("%d",&n);

	c=0;
        for(a=1;a<=sqrt(n);a++)
        {       if(n%a==0)
                b=n/a;
                c=a+b;}
	printf("c=%d",c+1);

	return 0;
}

