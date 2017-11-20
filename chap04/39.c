/* 4-9 */

#include <stdio.h>
int main ()
{
    int a, b;
    printf("正整数：");
    scanf("%d", &a);
    if (a >= 0) {
        while (a-- > 0){
            if (a % 2){
                putchar('-');
            } else
                putchar('+');
     } putchar('\n');
    } else 
    return 0;
}
