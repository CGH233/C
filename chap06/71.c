/* 6-5 */
#include <stdio.h>
int sumup (int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++) 
    {
        sum += i;
    } 
    return sum;
}
int main ()
{
    int a;
    printf("请输入一个整数：");
    scanf("%d", &a);
    printf("1到%d之间所有整数的和是%d。\n", a, sumup(a));
    return 0;
}
