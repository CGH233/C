/* 3-12 */

#include<stdio.h>

int main(void)
{
    int a;

    printf("请输入一个整数：");
    scanf("%d", &a);

    switch(a % 2) {
        case 0 : puts("该整数是偶数。");    break;
        case 1 : puts("该整数是奇数。");    break;
    }
    return 0;
}
