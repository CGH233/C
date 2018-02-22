#include <stdio.h>
int main ()
{
	long N, i, j, m, max = 0, s;
	scanf("%ld",&N);
	long a[N], b[N], c[N];
	for (i = 0;i < N;i++){
		scanf("%ld %ld",&a[i],&b[i]);
		if (a[i] > max){
			s = a[i];
		}
	}
	for (i = 0;i < s;i++){
		c[i] = 0;
		for (j = 0;j < N;j++){
			if (a[j] == i + 1){
				c[i] += b[j];
			}
		}
	}
	max = c[0];
	for (i = 0;i < s;i++){
		if (c[i] > max){
			max = c[i];
			m = i + 1;
		}
	}
	printf("%ld %ld",m,max);
	return 0;
}
