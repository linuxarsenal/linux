//int a = 2;
int power(int n)
{
	int a = 2;
//	extern int a;//引用另外一个文件中的全局变量（外部变量）
	int result = 1;
	int i;
	for(i = 1;i <= n;i++)
		result *= a;
	return result;
}
