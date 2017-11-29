/* 8-6 */
#include <stdio.h>
int factorial(int n)
{   
    int b = 1;
    if (n > 0) {
        while (n > 0) {
        b *= n;
        n -= 1;
    }
    return b;
    }
    else
        return 1;
}
int main()
{
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);
    printf("该整数的阶乘为%d。\n",factorial(num));
    return 0;
}
