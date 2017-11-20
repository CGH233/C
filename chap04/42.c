/* 4-12 */

#include <stdio.h>
int main ()
{
    int a,b;
    do {
        printf("请输入一个正整数：");
        scanf("%d", &a);
        if (a <= 0)
            puts("请不要输入非正整数。");
    } while (a <= 0);
    b = 0;
    printf("%d的位数是", a);
    while (a >= 1) {
        b ++;
        a /= 10;
    } printf("%d",b);
    puts("。");
    return 0;
} 
