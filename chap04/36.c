/* 4-6 */

#include <stdio.h>

int main()
{
    int a, b;
    printf("请输入一个正整数:");
    scanf("%d", &a);
    b = 0;
    while (b <= (a - 2)) {
        printf("%d ", b += 2);
    } printf("\n");
    return 0;
}
