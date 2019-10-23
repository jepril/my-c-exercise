#include <stdio.h>

void pao(int a[],int n)
{
	int i,j,t;
	
	for(i=0;i<=n-1;i++){
		for(j=n-1;j>i;j--){
			if(a[j-1]>a[j]){
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;}
		}
	}
}

int main()
{
	int i;
	int n;

	printf("输入n个");
	scanf("%d",&n);

	int h[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&h[i]);}

	pao(h,n);
	puts("按升序");
	for(i=0;i<n;i++)
	printf("%2d\n",h[i]);

	return 0;
}

