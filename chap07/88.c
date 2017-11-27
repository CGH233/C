/* 7-10 */
#include <stdio.h>
int main()
{
    int i;
    float x,y;
    for (x = 0.0,i = 0; x <= 1.0 && i <= 100; x += 0.01, i++){
        printf("x = %f  ", x);
        printf("x = %f\n", i / 100.0);
    }
    return 0;
} 
