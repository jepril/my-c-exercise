#include <stdio.h>

int main()
{
	int n1,n2,a,b,t;

	printf("请输入两个数");
	scanf("%d%d",&n1,&n2);

	if(n1<n2)
	{
		t=n1;
		n1=n2;
		n2=t;
	}
	
	a=n1;
	b=n2;
	
	 while(b!=0)
	 {	 t = a%b;
                a = b;
                b=t;}

	printf("最大公约数%d\n",a);
	printf("最小公倍数%d\n",n1*n2/a);

	return 0;

}
