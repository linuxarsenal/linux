#include <stdio.h>

int main(void)
{
		int n,a = 0;
		for(n = 101;n <= 200;n++)
		{
				if((n%2 == 0)||(n%3 == 0)||(n%5 == 0)||(n%7 == 0))
						;
				else
				{		a++;
						printf("%d ",n);
				}
		}
		printf("\n");
		printf("总个数:%d\n",a);
		return 0;
}
