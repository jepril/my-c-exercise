#include <stdio.h>

int main (void)
{
	int ch;
	int i=0;

	
	while	((ch = getchar())	!=EOF){
	
	if(ch == '\n')
		i++;
	}

	printf("%d",i);

	return 0;
}
