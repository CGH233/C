/* 10-2 */
#include <stdio.h>
void decrement_date(int *y, int *m, int *d)
{
	if (*d > 1)
		if (*d < 32)
			*d = *d - 1;
		else 
			printf("不要输入错误的日期啊！！");
	if (*d == 1) {
		if (*m > 1) {
			if (*m < 12) {
				*m = *m - 1;
				if (*m == 1 || *m == 3 || *m == 5 || *m == 7 || *m == 8 || *m == 10 || *m == 12)
					*d = 31;
			    else {
					if (*m == 2 ) {
						if (*y % 4)
							*d = 29;
						else 
							*d = 28;
					}
					else 
						*d = 30;
				}
			}
			else
				printf("不要输入错误的日期啊！！");
		}
		else {
			*y = *y - 1;
			*m = 12;
			*d = 31;
		}
	}
}
int main ()
{
	int y, m, d;
	printf("请输入年份：");
	scanf("%d", &y);
	printf("请输入月份：");
	scanf("%d", &m);
	printf("请输入日期：");
	scanf("%d", &d);
	decrement_date(&y,&m,&d);
	printf("日期前挪一天是：%d年%d月%d日。\n", y, m, d);
	return 0;
}
