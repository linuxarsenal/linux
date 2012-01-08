#include <stdio.h>
#define T_INT int
#define CHAR_P char*

typedef int t_int;
typedef char* char_p;

int main(void)
{
	T_INT a = 10;
	t_int b =20;
	printf("a:%d b:%d\n",a,b);

	char c1 = 'a';
	char c2 = 'b';
	char c3 = 'c';
	CHAR_P p1,p2,p3;//defined定义的只有p1是指针  其他是变量
	p1 = &c1;
	p2 = &c2;
	p3 = &c3;

	char_p p4,p5,p6;//typedef定义都是指针
	p4 = &c1;
	p5 = &c2;
	p6 = &c3;
	return 0;
}
