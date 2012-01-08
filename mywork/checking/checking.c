#include <stdio.h>
#include <checking.h>

int salary;
int main(void)
{
		int y = 1;
		while(y)
		{
				printf("\n");
				printf("请选择:\n");
				printf("1)清空账户余额 2)往账户上存钱 3)从账户上取钱 4)显示当前余额 5)退出程序\n");
				int i,q,p,w;
				scanf("%d",&i);

				switch(i){
						case 1:
								qingkong();
								break;
						case 2:
								printf("往账户上存钱:");
								scanf("%d",&q);
								cunqian(q);
								break;
						case 3:
								printf("从账户上取钱:");
								scanf("%d",&p);
								quqian(p);
								break;
						case 4:
								xianshi(salary);
								break;
						case 5:
                                y = 0;
								break;
						default:
								break;
				}
		}
		return 0;
}
