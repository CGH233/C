#include <stdio.h>
int main ()
{
	int M, N, j = 0, k = 0;
	long long i;
	scanf("%d %d",&M,&N);
	long  long a[N - M + 1];
	for (i = 0;i < 10000000;i++){
		if (i == 2 || i == 3 || i == 5 || i == 7){
			j++;
			if (j >= M){
				if (j <= N){
					a[k] = i;
					k++;
				}
			}
		}	
		if (i > 10 && i % 2 && i % 3 && i % 5 && i % 7){
			j++;
			if (j >= M){
				if (j <= N){
					a[k] = i;
					k++;
				}
			}
		}
	}
	j = 0;
	for (i = 0;i < (N - M);i++){
		if (j < 9){
			printf("%lld ",a[i]);
			j++;
		}
		else{
			if (j == 9){
				printf("%lld",a[i]);
				j++;
			}
			else{
				j = j - 10;
				puts("");
				printf("%lld ",a[i]);		
				j++;
			}
		}
	}
	printf("%lld",a[N - M]);
	return 0;
}
