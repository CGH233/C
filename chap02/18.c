/* 2-6 */

#include <stdio.h>

int main(void)
{
    int a;

    printf("请输入您的身高:");     scanf("%d", &a);
    printf("您的标准体重是%.1f公斤。\n",(double) (a - 100) * 0.9);

    return 0;
}
