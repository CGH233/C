#include <stdio.h>
int pxmax (int max, const int a[], int n)
{
	if ((n - 1) >= 0){
		if (a[n - 1] > max)
			max = a[n - 1];
		return pxmax(max,a,n - 1);
	}
	else
		return max;
}
int pxmin (int min, const int a[], int n)
{
	if ((n - 1) >= 0){
		if (a[n - 1] < min)
			min = a[n - 1];
		return pxmin(min,a,n - 1);
	}
	else
		return min;
}
int main()
{
	int n; //输入正整数ａ
	scanf("%d",&n);
	char a[n][11]; //姓名
	char b[n][11]; //学号
	int c[n]; //成绩
	int i, max = 0, min = 101;
	for ( i = 0;i < n;i++ ) {
		scanf("%s %s %d", a[i],b[i],&c[i]);
	}
	max = pxmax(max,c,n);
	min = pxmin(min,c,n);
	for (i = 0;i < n;i++){
		if (c[i] == max)
			printf("%s %s",a[i],b[i]);
	}
	printf("\n");
	for (i = 0;i < n;i++){
		if (c[i] == min)
			printf("%s %s",a[i],b[i]);
	}
	return 0;
}
