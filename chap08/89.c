/* 8-1 */
#include <stdio.h>
#define diff(x,y) (x - y)
int main ()
{
    int x,y;
    printf("输入两个整数\n");
    printf("x:");
    scanf("%d", &x);
    printf("y:");
    scanf("%d", &y);
    printf("x - y = %d\n",diff(x,y));
    return 0;
}
