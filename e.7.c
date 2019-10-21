#include <stdio.h>
#include <ctype.h>

void daxie(char s[])
{
	int i=0;
	while (s[i]){
		s[i] = toupper(s[i]);
		i++;
	}
}

int main ()
{
	char s[128];

	puts("请输入字符串：");
	scanf("%s",s);

	daxie(s);
	printf("大写字母：%s",s);

	return 0;
}
