/* 6-9 */
#include <stdio.h>
void rev_intary(int v[], int n)
{
    int i, a;
    for (i = 0; i < n / 2; i++)
    {
        a = v[i];
        v[i] = v[n - i - 1];
        v[n - i - 1] = a;
     }
}
int main ()
{
    int i, n;
    printf("请输入数组元素数：");
    scanf("%d", &n);
    int a[n];
    puts("请输入数组各元素的值。");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    puts("倒序输出：");
    rev_intary(a,n);
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);    
    }
    return 0;
}
