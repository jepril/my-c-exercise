#include <stdio.h>

int main()
{	int a , b , c , d ;
	
	for (a=1 ; a<10 ; a++){
		for(b=0 ; b<10 ; b++){
			for(c=0 ; c< 10 ; c++)
				{	d = a*100 + b*10 + c;
					if (d ==( a*a*a + b*b*b + c*c*c))
						printf("%d ",d);}}}
	return 0;
}


