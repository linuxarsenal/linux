#include <stdio.h>

int main(void)
{
		int n,a,g,s,b;
		for(n = 0;n < 1000;n++)
		{	
				b = n/100;
				s = n%100/10;
				g = n%100%10;
				a = (b*b)*b + (s*s)*s + (g*g)*g;
				if(a == n)
				{
						printf("%d ",n);
				}
				else
						;
		}
		printf("\n");
		return 0;
}
