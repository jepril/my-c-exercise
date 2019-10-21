#include <stdio.h>

void main()
{
	int i=0;
	char s[i];
	int num=0;

	printf("输入字符串");		
	scanf("s=%s",s);

	while(s[i])
	{
		num = s[i++] - 48;

	}
	printf("num is : %d \n",num);

}
