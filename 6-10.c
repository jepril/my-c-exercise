#include <stdio.h>

void intary_rcpy(int v1[], int v2[],int n)
{
        int i,a;

        for (i=0;i<n/2;i++)
                { a = v2 [n-1-i];
                  v2 [n-i-1] = v2 [i];
                  v2 [i] = a;}
	for (i=0;i<n;i++)
		v1[i]=v2[i];
}


int main (void)
{
        int n,i;
        printf("数组元素个数：");       scanf("%d",&n);
        int v1[n] , v2[n];
        for(i=0;i<n;i++)
        {       printf("v2[%d]=",i);
                scanf("%d",&v2[i]);
        }

        intary_rcpy(v1,v2,n);
	for (i=0;i<n;i++)
		printf("v1[%d]=%d\n",i,v1[i]);

	return 0;
}
