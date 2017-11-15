/* 1-8 */

#include <stdio.h>

int main(void)
{
    int a, b, c;
    
    puts("请输入两个整数。");
    printf("整数１:");     scanf("%d", &a);
    printf("整数２:");     scanf("%d", &b);

    c = a * b;
    
    printf("他们的乘积是%d。\n", c);
    
    return 0;
} 
