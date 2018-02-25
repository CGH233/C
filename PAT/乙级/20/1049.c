#include <stdio.h>
int main ()
{
	int N, i, j, k;
	scanf("%d",&N);
	double a[N], sum = 0;
	for (i = 0;i < N;i++)
		scanf("%lf",&a[i]);
	for (i = 0;i < N;i++){
		for (k = 0;k < N;k++){
			for (j = i;j < k + 1;j++){
				sum += a[j];
			}
		}
	}
	printf("%.2lf",sum);
	return 0;
}
