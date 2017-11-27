/* 7-3 */
#include <stdio.h>
int main ()
{
    double a;
    float b;
    long double c;
    printf("a:");
    scanf("%lf", &a);
    printf("b:");
    scanf("%f", &b);
    printf("c:");
    scanf("%Lf", &c);
    printf("a + b = %f\n",a + b);
    printf("b + c = %Lf\n", b + c);
    return 0;
}

