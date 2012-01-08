#include<stdio.h>
#include "myinfo.h"


/*void outname()
{
  printf("hello briuo\n");
}

int amount_salary(int salary)
{

   return salary * 12;
}
*/
int main(void)
{
  out_name();

  printf("please input your salary:");
  int salary;
  scanf("%d",&salary);
  int amount = amount_salary(salary);
  printf("amount:%d\n",amount);

  return 0;
 }
