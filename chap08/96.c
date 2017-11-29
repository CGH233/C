/* 8-10 */
/*第八章完成*/
#include <stdio.h>
int main ()
{
    int i,j,ch;
    int cnt[10] = {0};
    while ((ch = getchar())  != EOF) {
        if (ch >= '0' && ch <= '9')
            cnt[ch - '0']++;
    }
    printf("数字字符出现的次数");
    for (i = 0; i < 10; i++){
        printf("%d:",i);
        for (j = 0; j < cnt[i]; j++){
            putchar('*');    
        }
        puts("");
    }
    return 0;
}
