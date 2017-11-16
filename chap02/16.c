/* 2-4 */

#include <stdio.h>

int main(void)
{
    int a;
    double b;

    printf("输入int型变量a:");      scanf("%d", &a);
    printf("输入double型变量b:");     scanf("%lf", &b);

    printf("整型常量乘浮点型常量＝%f\n", a * b);
    printf("整型常量除浮点型常量＝%f\n", a / b);

    return 0;
}
