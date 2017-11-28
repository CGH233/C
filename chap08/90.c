/* 8-3 */
#include <stdio.h>
#define swap(type,x,y) {type tmp; tmp=a; a=b; b=tmp;}
int main()
{
    int a,b;
    printf("整数1：");
    scanf("%d", &a);
    printf("整数2：");
    scanf("%d", &b);
    puts("交换！！！");
    swap(int,a,b);
    printf("整数1：%d\n整数2：%d\n",a,b);
    return 0;
}
