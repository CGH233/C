/* 6-15 */
#include <stdio.h>
void put_count()
{
    static int i = 0;
    printf("put_count: 第%d次\n", ++i);
}
int main ()
{
    put_count();
    return 0;
}
