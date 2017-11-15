/* 1-9 */

#include <stdio.h>

int main(void)
{
    int a, b, c, d;

    puts("请输入三个整数。");
    printf("整数１:");     scanf("%d", &a);
    printf("整数２:");     scanf("%d", &b);
    printf("整数３:");     scanf("%d", &c);
    
    d = a + b + c;

    printf("它们的和是%d。\n", d);

    return 0;
}
