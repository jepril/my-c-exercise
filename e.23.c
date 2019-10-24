#include <stdio.h>
#include <string.h>

int main()
{ 
	int i;
	char s[128]={0};
	printf("请输入一串字符");
	scanf("%s",s);
	int len_s;
	len_s=strlen(s);

	char t;
	for(i=0;i<=len_s/2;i++)
	{
		t=s[i];
		s[i] = s[len_s -i-1];
		s[len_s-i-1] = t;}

	puts(s);

	return 0;
}
