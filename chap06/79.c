/* 6-16 */
#include <stdio.h>
void mat_add (const int a[4][3][2], int c[4][3][1])
{
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j][0] = a[i][j][0] + a[i][j][1];
        }
    }
}
void mat_print1(const int m[4][3][2])
{
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", m[i][j][1]);
        } 
        putchar('\n');
    }
}
void mat_print2(const int m[4][3][2])
{
     int i, j;
     for (i = 0; i < 4; i++) {
         for (j = 0; j < 3; j++) {
             printf("%4d", m[i][j][1]);
         }   
         putchar('\n');
     }   
}   
void mat_print3(const int m[4][3][1])
{
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
             printf("%4d", m[i][j][1]);
        }
        putchar('\n');
    }
} 
int main ()
{
    int a[4][3][2] = {0};
    int sum[4][3][1];
    mat_add(a,sum);
    puts("第一次的分数");
    mat_print1(a);
    puts("第二次的分数");
    mat_print2(a);
    puts("总分");
    mat_print3(sum);
    return 0;
}
