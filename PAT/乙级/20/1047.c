#include <stdio.h>
#include <math.h>
int main ()
{	
	int N, i, j, n, s = 0, k = 0, max;
	scanf("%d",&N);
	char a[N][12];
	int b[N];
	int c[N];
	int d[N];
	for (i = 0;i < N;i++)
		scanf("%s %d",a[i],&b[i]);
	for (i = 0;i < N;i++){
		for (j = 0;a[i][j] != '-';j++);
		n = j;
		for (j = 0;j < n;j++){
			s += (a[i][j] - '0') * pow(10,(n - j - 1)); 
		}
		for (j = 0;j < N;j++){
			if (s != c[j] && j  == (N - 1)){
				c[k] = s;
				d[k] = b[i];
				k++;
			}
			if (s == c[j])
				d[j] += b[i];
		}
		s = 0;
	}
	max = d[0];
	for (j = 0;j < k - 1;j++){
		if (d[j] > max){
			max = d[j];
			i = c[j];
		}
	}
	printf("%d %d",i,max);
	return 0;
}
