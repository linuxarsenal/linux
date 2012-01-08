#include <stdio.h>

int main(void)
{

		enum Grade{A,B,C,D,E};
		enum Grade grade =D;
		switch(grade){

				case A:
						printf("grade is A\n");
						break;
				case B:
						printf("grade is B\n");
						break;
				case C:
						printf("grade is C\n");
						break;
				case D:
						printf("grade is D\n");
						break;
				case E:
						printf("grade is E\n");
						break;
				default:
						printf("unknown");
						break;

		}

		int year,month;
		printf("please input year and month:");
		scanf("%d%d",&year,&month);
		switch(month){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
						printf("31 days\n");
						break;

				case 4:
				case 6:
				case 9:
				case 11:
						printf("30 days\n");
						break; 

				case 2:
						if(year % 400 ==0 ||
										(year % 4 == 0 && year % 100 != 0))
								printf("29 days\n");
						else
								printf("28 days\n");
						break;
		}

		return 0;
}
