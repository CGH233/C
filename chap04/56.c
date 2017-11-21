/* 4-25 */
#include <stdio.h>
int main ()
{
    int i, j, n;
    puts("让我们来画一个向下的金字塔。");
    printf("金字塔有几层：");
    scanf("%d", &n);
    for (i = 1; i <= n; i ++){
        for (j = 1; j <= i; j ++)
            printf(" ");
        for (j = 1;j < 2 * n - i ; j ++)
            printf("%d", i % 10);
        putchar('\n');
        }
        return 0;
}
        
