#include <stdio.h>

int main(void)
{
		int n, i = 2;
		printf("请输入一个数:");
		scanf("%d",&n);
		while(1)
		{
				if(n%i == 0)
				{
						n = n/i;
						printf("%d ",i);
						if(n == i)
						{
								printf("%d\n",i);
								break;
						}
						i++;
				}
				else if(n%i != 0)
				{
						i = i++;
						if(n%i == 0)
						{
								printf("%d",i);
								i = i++;
						}
				}
		}
		return 0;
}
