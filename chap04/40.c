/* 4-10 */

#include <stdio.h>
int main ()
{
    int a, b;
    printf("正整数：");
    scanf("%d", &a);
    if (a >= 0) {
        while (a-- > 0){
            puts("*");}
    }else
    return 0;
}
