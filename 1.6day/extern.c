#include<stdio.h>

int max(int a, int b)
{
	return a > b ? a : b;	
}

int main(void)
{
	extern int a,b;// extern a,b;利用extern声明一个文件中的全局变量 只限于  全局变量
    int result = max(a,b);
 	printf("result:%d\n",result);
	return 0;
}
int a =	10, b = 20;
