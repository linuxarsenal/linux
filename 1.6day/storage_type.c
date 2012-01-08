#include <stdio.h>

void func();
int a1;//默认初始化为0 
static int a2; //默认初始化为0

int main(void)
{
    printf("int a1: %d  static int a2: %d \n",a1,a2);
	a1++;
	a2++;

    func();
    func();
    func();
}

void func()
{
    printf("int a1: %d  static int a2: %d \n",a1,a2);

    int a = 10; //auto,默认不会初始化返回一个不确定的值
    a++;
    auto int b = 20; //auto
    b++;
    register int r = 30;//寄存器变量
    r++;
    printf("a: %d b: %d r: %d\n",a,b,r);

    static int count;//默认初始化为0
    count++;
    printf("static count: %d\n",count);
}
