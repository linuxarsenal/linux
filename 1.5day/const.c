#include <stdio.h>
#define LENGTH 100

int main(void)
{
	printf("LENGTH:%d\n",LENGTH);
	LENGTH = 200;//error
   //	只读变量 可通过指针改变
	scanf("%d",&a);
	print("a:%d\n",a);
	int const a = 10;
   //	a = 20;
	int *p = &a;
	*p = 20;
	printf("a:%d\n"a);
	//常量指针
	//特点：不能通过该常量指针去修改他所指向的存储单元中的值（其他指针				可以修改），指针本身可以修改（就是可以改变去指向其他的变量				）
	int x = 100;
	int y = 200;
	printf("x:%d\n",*pci);
	*pci = 200;
	pci = &y;
	//指针常量
	//特点 可以通过该指针去修改它所 指向的存储单元中的值  指针本身不可				以被修改
	int *const cpi = &x;
	printf("*cpi:%d\n",*cpi);
	*cpi = 200;
	cpi = &y;//不可以 指针本身不可以修改  要通过其他指针去修改

	//定义指针的指针（二级指针）
	int **pp = &cpi;
 	*pp = &y;
	printf("*cpi:%d",*cpi);

	//都不可以被修改
	int const * const cp = &x;
	//*cpci = 200;
	//cpci = &y;

	return 0;
}
