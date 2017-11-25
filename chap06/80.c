/* 6-14 */
#include <stdio.h>
double a = 0.0;
int main()
{
    static double b = 0.0;
    printf("a = %f , b = %f \n", a, b);
    return 0;
} 
