/* 4-18 */
#include <stdio.h>
int main ()
{
    int a, b;
    printf("显示多少个*：");
    scanf("%d", &a);
    b = 1;
    while (b <= a) { 
        putchar('*');
        b ++;
        if ((b % 5) == 1) 
            printf("\n");
        }
    puts("");
    return 0;
}
