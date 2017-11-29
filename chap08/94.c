/* 8-7 */
#include <stdio.h>
int factorial(int n)
{
    if (n > 0){
        return n * factorial(n - 1);
    }
    else
        return 1;
}
int combination(int n, int r)
{
    if (n > 0) {
        return factorial(n) / (factorial(n - r) * factorial(r));
    }
    else
        return 1;
}
int main()
{
    int n,r;
    printf("请输入一个整数：");
    scanf("%d", &n);
    printf("请输入要取出的整数数：");
    scanf("%d", &r);
    printf("从%d个整数中取出%d个整数的取法有%d种。\n",n,r,combination(n,r));
    return 0;
}
