/* 3-8 */

#include <stdio.h>

int main(void)
{
    int a, b;
    puts("请输入两个整数。");
    printf("整数1:");      scanf("%d", &a);
    printf("整数2:");      scanf("%d", &b);

    if (a > b)
        printf("它们的差是%d。\n", a - b);
    else 
        printf("它们的差是%d。\n", b - a);

    return 0;
}
