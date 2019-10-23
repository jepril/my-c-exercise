#include <stdio.h>

int main()
{
	int a=0,b=0,c=0,d=0;
	char n;

	printf("请输入一行字符");

	while((n=getchar())!='\n'){
	if((n>='a'&&n<='z') || (n>='A'&&n<='Z'))
		a++;
	else if(n>=0||n<=9)
		b++;
	else if(n==' ')
		c++;
	else
		d++;}

	printf("字母%d，数字%d，空格%d，其他%d",a,b,c,d);

	return 0;
}
