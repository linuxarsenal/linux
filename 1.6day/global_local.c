#include <stdio.h>

int g1 = 10;
int g2;
static int s1 =20;
static int s2;
int main(void)
{
	static int s3= 21;
	static int s4;
	int l1 = 30;
	int l2;


	printf("g1:%p %d g2:%p %d\n",&g1,g1,&g2,g2);
	printf("s1:%p %d s2:%p %d s3:%p %d s4:%p %d\n",&s1,s1,&s2,s2,&s3,s3,&s4,			s4);
	printf("l1:%p %d l2:%p %d\n",&l1,l1,&l2,l2);
	return 0;
}
