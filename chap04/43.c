/* 4-13 */

#include <stdio.h>
int main ()
{
    int a, b, c = 0;
    printf("n的值：");
    scanf("%d", &a);
    for (b = 1; b <= a; b ++) { 
        c += b;
    }
    printf("1到%d的和为%d。\n", a, c);
    return 0;
}
