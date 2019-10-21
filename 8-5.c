#include <stdio.h>

enum gender {male ,female };
enum season {sping ,summer ,autumn ,winter };

int main(void)
{
	int a;
	printf("select gender");
	scanf("%d",&a);
	switch (a)
	{
		case 0	:	printf("male selected\n");	break;
		case 1	:	printf("female selected\n");	break;
	}

	int b;
	printf("select season");
	scanf("%d",&b);
	switch (b)
	{
		case 0	:	printf("spring\n");	break;
		case 1	:	printf("summer\n");	break;
		case 2	:	printf("autumn\n");	break;
		case 3	:	printf("winter\n");	break;
	}
	
	return 0;
}
