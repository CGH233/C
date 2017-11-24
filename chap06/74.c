/* 6-8 */
#include <stdio.h>
int min_of(const int v[], int n)
{
    int i, min;
    for (i = 0, min = v[0]; i < n; i++)
    {
        if (min > v[i])
            min = v[i];
    }
    return min;
}
int main ()
{
    int n, i;
    printf("元素个数：");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("整数%d：", i + 1);
        scanf("%d", &a[i]);
    }
    printf("最小值%d。\n", min_of(a, n));
    return 0;
}
