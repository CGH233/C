/* 7-9 */
#include <math.h>
#include <stdio.h>
int main()
{
    double a;
    printf("请输入正方形的面积：");
    scanf("%lf", &a);
    printf("正方形边长为%lf。\n",sqrt(a));
    return 0;
}
