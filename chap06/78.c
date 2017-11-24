/* 6-12 */
#include <stdio.h>
void mat_mul(const int a[3][4], const int b[4][3], int c[3][3])
{
    int i,j,k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                c[i][j] += a[i][k] + b[k][j];
                printf("%4d", c[i][j]);
            }
            puts("");
        }
    }
}
int main ()
{
    int a[3][4] = {0};
    int b[4][3] = {0};
    int c[3][3] = {0};
    mat_mul(a,b,c);
    return 0;
}
