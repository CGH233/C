/* 4-19 */
#include <stdio.h>
int main()
{  
    int a, b, c = 0;
    printf("整数值：");
    scanf("%d", &a);
    b = 1;
    while (b <= a) {
        if (a % b) {
            b ++;
         } else {
            printf("%d ", b);
            b ++;
            c ++;
         }}
    printf("\n");
    printf("约数有%d个。\n",c);
    return 0;
}
