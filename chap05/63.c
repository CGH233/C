/* 5-7 */
#include <stdio.h>
#define n a
int main()
{
    int a, i;
    printf("数据个数：");
    scanf("%d", &n);
    int v[n];
    for (i = 0; i < n; i++) {
        printf("%d号：", i + 1);
        scanf("%d", &v[i]);
    }
    putchar('{');
    for (i = 0; i < n; i++) {
        if (i < n - 1) {
            printf("%d, ", v[i]);
        } else
            printf("%d", v[i]);
    }
    puts("}");
    return 0;
}
