#include <stdio.h>
int main ()
{
	int N, D, i, j;
	scanf("%d %d",&N, &D);
	double a[N], b[N], s = 0, m = 0;
	for (i = 0;i < N;i++){
		scanf("%lf",&a[i]);
	}
	for (i = 0;i < N;i++){
		scanf("%lf",&b[i]);
	}
	for (i = 0;i < N - 1;i++){
		for (j = N - 1;j > i;j--){
			if ((b[j] / a[j]) < (b[j - 1] / a[j - 1])){
				double temp1 = a[j], temp2 = b[j];
				a[j] = a[j - 1];
				a[j - 1] = temp1;
				b[j] = b[j - 1];
				b[j - 1] = temp2;
			}
		}
	}
	for (i = N - 1;i > -1 && (s + a[i]) < D;i--){
			s += a[i];
			m += b[i];
	}
	m += (D - s) * (b[i] / a[i]);
	printf("%.2lf",m);
	return 0;
}
