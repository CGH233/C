/* 3-5 */

#include <stdio.h>

int main(void)
{
    int a, b;
    puts("输入两个整数:");
    printf("整数A:");      scanf("%d", &a);
    printf("整数B:");      scanf("%d", &b);
    puts("比较A和B的大小");
    if ((a >= b) == 1)
        if (a == b)
            printf("相等运算符的运算结果是:%d\n", (a == b));
        else
            printf("A大于B的运算结果是:%d\n", (a > b));
    else
        printf("A小于B的运算结果是:%d\n", (a < b));
    return 0;
}
