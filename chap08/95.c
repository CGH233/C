/* 8-8 */
/* 这一题在网上查过，我真是辣鸡。*/
#include <stdio.h>
int gcd (int x, int y)
{
    int min,max,tmp;
    min = x < y ? x:y;
    max = x > y ? x:y;
    if (min == 0)
        tmp = max;
    else
        tmp = gcd(min, max % min);
    return tmp;
}
int main()
{
    int a,b;
    printf("请输入两个正整数\n");
    printf("整数１:");
    scanf("%d", &a);
    printf("整数２:");
    scanf("%d", &b);
    printf("%d和%d的最大公约数为%d。\n",a,b,gcd(a,b));
    return 0;
}
