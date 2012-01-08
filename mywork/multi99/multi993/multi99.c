#include  <stdio.h>


int main(void)
{
	int i,j,h,k = 32;
	for(i = 1;i <= 9;i++)
	{
		for(h = 0;h <= k;h++)
		{
			printf(" ");
		}
		for(j = 1;j <=i;j++)
		{
			int num;
			num = i * j;
			printf("%d",j);
			printf("*");
			printf("%d",i);
			printf("=");
			printf("%d",num);
			printf("  ");
		}
	    k = k-4;
	    printf("\n");
	}



	return 0;
}
