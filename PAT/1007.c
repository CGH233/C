#include <stdio.h> 
int main()
{
	int i, j = 0, N, k = 0, d;
	scanf("%d", &N);
	int a[N];
	for (i = 0;i <= N;i++){
		if (i == 2 || i == 3 || i == 5 || i == 7){
			a[j] = i;
			j++;
		}
		if ((i > 10) && (i % 2) && (i % 3) && (i % 5) && (i % 7)){
			a[j] = i;
			j++;
		}
	}
	j = j - 1;
	for (i = 0;i < j;i++){
		d = a[i + 1] - a[i];
		if (d == 2)
			k++;
	}
	printf("%d",k);
	return 0;
}
