#include <stdio.h>

int a();
static int b(int);

int main(void)
{
	a();
	//b(10);//不能调用static的内部函数
	return 0;
}

