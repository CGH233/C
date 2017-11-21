/* 5-1 */
#include <stdio.h>
int main ()
{
    int i;
    int v[5];
    for (i = 0; i < 5; i++)
        v[i] = i;
    for (i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, v[i]);
    return 0;
}
