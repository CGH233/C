/* 4-11 */

#include <stdio.h>
int main ()
{
    int a;
    do {
        printf("请输入 一个正整数：");
        scanf("%d", &a);
        if (a <= 0)
            puts("\a请不要输入非整数。");
    } while (a <= 0);
    printf("%d逆向显示的结果是", a);
    while (a > 0) {
        printf("%d", a % 10);
        a /= 10;
    }
    puts("。");
    return 0;
}
