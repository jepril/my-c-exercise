#include <stdio.h>

int main (void)

{
        int no;
	int i=0;

        do{
                printf("请输入一个正整数。");
                scanf("%d",&no);
                if (no<=0)
                        puts("请不要输入非正整数。");
        } while (no<=0);
	 while(no>0){
                i=i+1;
                no/=10;
        }
        printf("该整数的位数是%d",i);
	puts("。\n");
}
                
