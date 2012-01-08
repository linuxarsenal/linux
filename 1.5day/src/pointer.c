#include <stdio.h>

int main()
{
  	int a = 10;
	int *p = &a;
	printf("p:%p %d a:%p %d\n",p,*p,&a,a);
		
	char ch = 'a';
	char *p2 = &ch;
	printf("p:%d p2:%d\n",
			sizeof(p),sizeof(p2));

//通用指针   可以指向任何类型
	int x = 20;
	char c = 'A';
//vp为通用指针
	void *vp = &x;
	printf("x:%d\n",*((int*)vp));//强制类型转换
	vp = &c;
	printf("c:%c\n",*((char*)vp));


	return 0;
}
