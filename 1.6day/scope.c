#include <stdio.h>

int a = 10;

int b(int c);

int main(void)
{
    int f=10;
    int g(int h);
    //...
    {
        int f=100, g, i;
	printf("%d\n",f);//?访问外部同名变量
        //...
    }
    printf("%d\n",a);
    printf("%d\n",f);
    {
        int i;
        //...
    }
    return 0;
}
