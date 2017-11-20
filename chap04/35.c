/* 4-5 */

#include <stdio.h>

int main ()
{
    int i, no;
    
    printf("请输入一个正整数:");
    scanf("%d", &no);
    i = 1;
    if (no >=0){
        while (i <= no) {
            printf("%d ", i++);
    }   printf("\n"); }
    else
        return 0;
}
