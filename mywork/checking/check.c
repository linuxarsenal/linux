#include <stdio.h>
#include <checking.h>

void qingkong()
{
		extern int salary;
		printf("清空账户余额");
		salary = 0;
} 
void cunqian(int b)
{
		extern int salary;
		salary = b + salary;
}	
void quqian(int c)
{
		extern int salary;
		salary = salary - c;
}
void xianshi(int d)
{
		printf("显示当前余额:");
		printf("%d\n",d);
}
