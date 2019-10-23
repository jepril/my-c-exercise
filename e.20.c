#include <stdio.h>

int jc(int i,int n,int t)
{
	t=1;
	for(i=1;i<=n;i++)
	{	
		t=t*i;}
	return t;
}
int main()
{
	int i,n,t;
	int s=0;

	for(n=1;n<=20;n++)
	{
		t=jc(i,n,t);
		s+=t;}

	printf("和:%d",s);

	return 0;
}
