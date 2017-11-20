/* 4-7 */

#include<stdio.h>
int main ()
{
    int a, b;
    printf("请输入一个整数：");
    scanf("%d", &a);
    b = 2;
    while(b <= (a - 2)) {
        printf("%d ", b);
        b *= 2;
    } printf("\n");
    return 0;
}
