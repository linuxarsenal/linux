#include <stdio.h>
#include <checking.h>

// 清空函数
void qingkong()
{
		extern int salary;
		printf("清空账户余额");
		salary = 0;
} 

// 存钱函数
void cunqian(int b)
{
		extern int salary;
		salary = b + salary;
}	

// 取钱函数
void quqian(int c)
{
		extern int salary;
		salary = salary - c;
}

// 显示函数
void xianshi(int d)
{
		printf("显示当前余额:");
		printf("%d\n",d);
}
