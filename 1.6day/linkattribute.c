#include <stdio.h>

/*链接属性介绍*/
int x = 10; //变量x的存储类型为extern,链接属性为External,可以在当前文件和其它文件使用
static int y = 1; //变量y的存储类型为static,链接属性为Internal，仅限于当前文件使用

//函数a的链接属性为External 称为外部函数可以在多个文件中使用,extern可以省略
extern int a(){ 
	printf("a()...\n");
	b(5);
}


//函数b的链接属性为Internal 称为内部函数或者静态函数使用仅限于当前文件
static int b(int i)
{
	printf("b()...\n");
    int k = 1; //变量k的存储类型为auto,链接属性为None
	int static m = 2;//变量m的存储类型为static,链接属性为Internal，仅限于当前函数使用   
}
