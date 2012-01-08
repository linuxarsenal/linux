#include <stdio.h>

int main(void)
{
	int i,j;
	for(i = 1;i <=9;i ++)
	{
		for(j = 1;j <= i; j++)
		{
			int num;
			num = i*j;
			printf("%d",i);
			printf("*");
			printf("%d",j);
			printf("=");
			printf("%d",num);
			printf("  ");
		}
		printf("\n");
	}
	return 0;
}
