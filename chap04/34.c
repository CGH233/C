#include <stdio.h>

int main ()
{
    int no;
    printf("请输入一个正整数：");
    scanf("%d", &no);
    if (no >= 0){
        while (no >= 1) {
            
            printf("%d", no--);
    }
            printf("\n"); }
    else 
        return 0;
}

