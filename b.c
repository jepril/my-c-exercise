#include <stdio.h>

int zun(int a,int b, int n)
{ 	while(b!=0)
         {       n = a%b;
                a = b;
                b=n;}
	return a;}

int main()
{
        int n1,n2,a,b,t,n;

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

	printf("%d",zun(a,b,n));
	printf("%d",n1*n2/a);

		return 0;
}
                                                              9,0-1        顶端

