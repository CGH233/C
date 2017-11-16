/* 2-1 */

#include <stdio.h>

int main(void)
{
    int x, y, z;
    
    puts("请输入两个整数。");

    printf("整数x:");      scanf("%d", &x);
    printf("整数y:");      scanf("%d", &y);

    z = 100 * x / y;

    printf("x的值是y的%d%%\n", z);

    return 0;
}
