/* 4-2 */

#include <stdio.h>

int main()
{
    int a, b, n, max, min;
    puts("请输入两个整数。");
    printf("整数a:");
    scanf("%d", &a);
    printf("整数b:");
    scanf("%d", &b);
    max = a > b ? a:b;
    min = a < b ? a:b;
    a = max;
    b = min;
    n = 0;
    do {
        n = n + min;
        min = min + 1;
    } while (max >= min);
    printf("大于等于%d小于等于%d的所有整数的和是%d。\n", b, a, n );
    return 0;
} 
