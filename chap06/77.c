/* 6-11 */
#include <stdio.h>
int search_idx(const int v[], int idx[], int key, int n)
{
    int i = 0, j = 0;
    while (i < n)
    {
        if (v[i] == key) {
            idx[j] = i;
            j++;
            i++;
        }
        else
            i++;
    }
    return j;
}
int main ()
{
    int i, n, key;
    printf("数组元素数：");
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("要查找的值：");
    scanf("%d", &key);
    printf("要查找的值有%d个。\n",search_idx(a,b,key,n)) ;
    return 0;   
}
