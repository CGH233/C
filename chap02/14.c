/* 2-2 */

#include <stdio.h>

int main(void)
{
    int x, y, a, b;

    puts("请输入两个整数。");

    printf("整数a:");      scanf("%d", &a);
    printf("整数b:");      scanf("%d", &b);

    x = a + b;
    y = a * b;

    printf("它们的和是%d，积是%d。\n", x, y);

    return 0;
}
