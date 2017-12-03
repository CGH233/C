/* 10-3 */
#include <stdio.h>
void swap (int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}
void sort3 (int *n1, int *n2, int *n3)
{
	if (*n1 > *n2)
		swap(n1,n2);
	printf("%d %d %d\n", *n1,*n2,*n3);
	if (*n1 > *n3) 
		swap(n1,n3);
	printf("%d %d %d\n", *n1,*n2,*n3);
	if (*n2 > *n3 )
		swap(n2,n3); 
	printf("%d %d %d\n", *n1,*n2,*n3);
}
int main()
{
	int a = 0, b = 0, c = 0;
	puts("请输入三个整数。");
	printf("整数A：");
	scanf("%d", &a);
	printf("整数B：");
	scanf("%d", &b);
	printf("整数C：");
	scanf("%d", &c);
	sort3(&a,&b,&c);
	printf("将三数升序排列：%d,%d,%d。\n",a,b,c);
	return 0;
}
