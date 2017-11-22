/* 5-10 */
/* 惹不起惹不起 */
#include <stdio.h>
#define m 4
#define n 3
int main()
{
    int i, j, k;
    int tensu1[m][n] = {0};
    int tensu2[n][m] = {0};
    int tensu3[m][m] = {0};
    printf("请输入一个%d行%d列矩阵。\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("第%d行第%d列的数：", i + 1, j + 1);
            scanf("%d", &tensu1[i][j]);
        } 
    } printf("请输入一个%d行%d列的矩阵。\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("第%d行第%d列的数：", i + 1, j + 1);
            scanf("%d", &tensu2[i][j]);
        }
    } 
    for (i = 0; i < m; ++i) {
        for (j = 0; j < m; ++j) { 
            for (k = 0; k < n; k++) {
                tensu3[i][j] += tensu1[i][k] * tensu2[k][j];
            }
        }
    } puts("矩阵乘积为如下。");
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("%4d ", tensu3[i][j]);
        } puts("");
    }
    return 0;
}
