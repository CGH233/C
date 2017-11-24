/* 6-9 */
#include <stdio.h>
void intary_rcpy(int v1[], const int v2[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        v1[i] = v2[n - i - 1];
    }
}
int main ()
{
    int i, n;
    printf("请输入数组元素数：");
    scanf("%d", &n);
    int a[n], b[n];
    puts("请输入数组各元素的值。");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    puts("倒序输出：");
    intary_rcpy(b,a,n);
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, b[i]);    
    }
    return 0;
}
