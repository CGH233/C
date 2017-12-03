/* 10-4 */
#include <stdio.h>
void set_idx(int *v, int n)
{
	int i;
	for (i = 0; i < n; i++) {
		*(v + i) = i;
	}
}
int main()
{
	int n;
	printf("请输入数组元素数：");
	scanf("%d", &n);
	int a[n];
	int *p = a;
	set_idx(p,n);
	int i;
	printf("数组各元素为{");
	for (i = 0; i < n; i++) {
		printf("a[%d] = %d",i,*(p + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("}。\n");
	return 0;
}
