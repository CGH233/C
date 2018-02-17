#include <stdio.h>
int main()
{
	int N, i, j, s = 0;
	scanf("%d",&N);
	int a[N];
	for (i = 0;i < N;i++){
		scanf("%d",&a[i]);
	}
	for (i = 0;i < N;i++){
		for (j = 0;j < N;j++){
			if (j != i)
				s += (a[i] * 10 + a[j]);
		}
	}
	printf("%d",s);
	return 0;
}
