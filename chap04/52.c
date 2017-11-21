/* 4-22 */
#include <stdio.h>
int main()
{
    int a, b, c, d;
    int i, j;
    puts("让我们来画一个长方形。");
    printf("一边：");
    scanf("%d", &a);
    printf("另一边：");
    scanf("%d", &b);
    c = a < b ? a:b;
    d = a > b ? a:b;
    for (i = 1; i <= c; i ++) {
        for (j = 1; j <= d; j ++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
    
