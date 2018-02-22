#include <stdio.h>
int main ()
{
	int N, i;
	scanf("%d",&N);
	int a[N];
	for (i = 0;i < N;i++){
		scanf("%d",&a[i]);
	}
	int K, j;
	scanf("%d",&K);
	int s[K], n[K];
	for (j = 0;j < K;j++){
		scanf("%d",&s[j]);
		n[j] = 0;
		for (i = 0;i < N;i++){
			if (a[i] == s[j]){
				n[j]++;
			}
		}
		if (j < K - 1)
			printf("%d ",n[j]);
	}
	printf("%d",n[K - 1]);
	return 0;
}
