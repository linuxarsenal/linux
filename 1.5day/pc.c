#include <stdio.h>
#include <string.h>

int main(void)
{
	
	int width,precision;
	float salary = 5555.343f;
	scanf("%d%d",&width,&precision);
	printf("salary:%*.*f\n",width,precision,salary);

	int n;
	scanf("%*d %*d %d",&n);
	printf("n:%d\n",n);

	return 0;
}
