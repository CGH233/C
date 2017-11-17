/* 3-9 */

#include<stdio.h>

int main(void)
{
    int a, b, c, min;
    puts("请输入三个整数。");
    printf("整数A:");      scanf("%d", &a);
    printf("整数B:");      scanf("%d", &b);
    printf("整数C:");      scanf("%d", &c);
    
    min = a < b ? a:b;
    min = c < min ? c:min;
    printf("最小值是%d。\n", min);
    
    return 0;
}
