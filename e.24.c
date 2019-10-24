#include <stdio.h>
#include <string.h>

void shi(int n)
{
	if(n>1)
	{
		shi(n/2);
	}
	printf("%d",n%2);
}

void er(int s,int m,char *c)
{	
	int i,j;
	int sum=0;

	for(i=0;i<m;i++){
		s=1;
		if(c[i]=='1'){
	for(j=1;j<=m-i-1;j++)
	{	s*=2;}
		sum+=s;}}
	printf("%d",sum);}

int main()
{
	int n,s,m;

	printf("请输入10进制数字");
	scanf("%d",&n);
	shi(n);

	char c[128];
	printf("请输入2进制数字");
	scanf("%s",c);
	m=strlen(c);

	er(s,m,c);
	return 0;
	}	
