#include <stdio.h>
int main ()
{
	int N;
	scanf("%d",&N);
	int a[N];
	int M;
	scanf("%d",&M);
	if (M > N)
		M = M % N;
	int i;
	for (i = 0;i < N;i++){
		if ((M + i) < N)
			scanf("%d",&a[i + M]);
		else
			scanf("%d",&a[i + M - N]);
	}
	for (i = 0;i < (N - 1);i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[N - 1]);
	return 0;
}
