#include <stdio.h>

#define NUMBER	5

void bsort(int a[], int n)
{
	int i , j;

	for (i=0;i<n-1;i++){
		for(j=i+1;j<n;j++)
		{if (a[j-1] > a[j]){
			int temp = a[j];
		 	a[j] =a[j-1];		   
			a[j-1] = temp;	}
		}
	}
}
int main(void)
{
	int i;
	int height[NUMBER];

	printf("sg%d\n",NUMBER);
	for(i=0;i< NUMBER;i++){
		printf("%2d号",i+1);
		scanf("%d",&height[i]);
	}

	bsort(height,NUMBER);

	puts("按升序排列。");
	for(i=0;i<NUMBER;i++)
		printf("%2d号：%d\n",i+1,height[i]);

	return 0;
}
