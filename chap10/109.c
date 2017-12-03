/* 10-1 */
#include <stdio.h>
void adjust_point(int *n)
{
	if (*n < 0)
		*n = 0;
	if (*n > 100)
		*n = 100;
}
int main ()
{
	int a,b;
	printf("请输入一个整数：");
	scanf("%d", &a);
	b = a;
	adjust_point(&a);
	printf("将%d约束在0~100内得：%d。\n",b,a);
	return 0;
}
