/* 4-16 */
#include <stdio.h>
int main()
{
    int a, b;
    printf("整数值：");
    scanf("%d", &a);
    for (b = 1;b <= a; b += 2) {
        printf("%d ", b);
    }
    putchar('\n');
    return 0;
}
