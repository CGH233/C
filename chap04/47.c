/* 4-17 */
#include <stdio.h>
int main ()
{
    int a, b;
    printf("n的值：");
    scanf("%d", &a);
    for (b = 1; b <= a; b ++) {
        printf("%d的二次方是%d\n", b, b * b);
    }
    return 0;
}
