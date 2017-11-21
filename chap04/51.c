/* 4-21 */
#include <stdio.h>
int main()
{
    int a, i, j;
    puts("生成一个正方形");
    printf("正方形有几层：");
    scanf("%d", &a);
    for (i = 1; i <= a; i ++) {
        for (j = 1; j <= a; j ++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}
