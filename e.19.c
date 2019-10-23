#include <stdio.h>

double main()
{
	double n=100.0;
	double s,i;

	s=100;
	for(i=1;i<=10;i++)
	{
		n=n/2;
		s+=n*2;
		}

	printf("s=%f",s);
	printf("x=%f",n);

	return 0;
}
