/* 6-6 */
#include <stdio.h>
void alert (int n)
{
    while (n-- > 0)
        putchar('\a');
}
int main ()
{
    int a;
    printf("连续响铃次数：");
    scanf("%d", &a);
    alert(a);
    return 0;
}
        
