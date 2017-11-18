/* 4-3 */

#include <stdio.h>
int main ()
{
    int no;
    printf("请输入一个正整数:");
    scanf("%d", &no);
    if (no >= 0) {
        while (no >= 0) {
        printf("%d", no);
        no--;
    }   printf("\n");
    }  
    else;
    return 0;
}
