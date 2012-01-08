#include <stdio.h>
#include <string.h>

int main(void)
{
	
	/*//signed short int a = +42768;
	int x = 10;
	float y = 20.55f;
	double z = 33.343;
	long double w = 44.322l;
	char ch = 'a';
	char str[] = "hello briup";
	
	printf("%05d %u %o %#x %#X\n",65536,x,x,x,x);
	printf("%.2f %e %E\n",y,y,y);
	printf("%c\n",ch);
	printf("%30s\n",str);
	printf("%d%%\n",x);
	printf("%d\n",20,30);
	printf("%Lf\n",w);
*/

/*	int a = (int)5.7;
	printf("a:%d\n",a);

	int height,width;
	printf("please enter height and width:");
	scanf("%d%d",&height,&width);
//	char c = getchar();
//	char c2 = getchar();
	printf("height:%d width:%d \n",height,width);
*/

	/*
	char s[20];
	printf("please enter a sentence:");
   //	scanf("%s",s);
	gets(s);//fgets(s,sizeof(s)-1,stdin);  //减 1 为 \0 留位置  stdin 是标准输入
//	printf("s:%s\n",s);
     puts(s);
*/
/*
	printf("please enter a number:");
	int num;
	scanf("%d",&num);
	printf("%d",&num);
	printf("please enter a character:");
	char ch1;
	scanf("%c",&ch1);
	printf("ch1:%c\n",ch1);
*/	

/*	
	printf("please enter two character:");
	char ch1,ch2;
	scanf("%c %c",&ch1,&ch2);
	printf("ch1:%c ch2:%c\n",ch1,ch2);
  */  

//	"*"用法
	int width,precision;
	float salary = 5555.343f;
	scanf("%d%d",&width,&precision);
	printf("salary:%*.*f\n",width,precision,salary);

	int n;
	scanf("%*d %*d %d",&n);//空格可跳过任意的字符
    //         * 来滞后  n 只读取最后一个 
	printf("n:%d\n",n);
	

	return 0;
}
