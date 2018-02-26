#include <stdio.h>
#include <string.h>
int main ()
{
	int N, M;
	scanf("%d %d",&N,&M);
	int i, j, k, l, n = 0, shit, z = 0;
	int a[3][M], b[N];
	char c[M][5][2];
	for (i = 0;i < M;i++){
		scanf("%d %d %d",&a[0][i], &shit, &a[1][i]);
		a[2][i] = 0;
		for (shit = 0;shit < a[1][i];shit++){
			scanf("%s",c[i][shit]);
		}
	}
	char d[N][M][9];
	for (i = 0;i < N;i++){
		b[i] = 0;
		for (j = 0;j < M;j++){
			while (getchar() != '(');
			scanf("%d",&k);
			if (k != a[1][j]){
				a[2][j]++;
				z++;
			}
			else{
				for (l = 0;l < k;l++){
					while((d[i][j][l] = getchar()) == ' ');
					if (d[i][j][l] == c[j][n][0]){
						if (l < k - 1)
							n++;
						else
							b[i] += a[0][j];
					}
					else{
						a[2][j]++;
						z++;
						l++;
					}
				}
				while (getchar() != ')');	
				n = 0;
			}
		}
	}
	for (i = 0;i < N;i++)
		printf("%d\n",b[i]);
	if (z != 0){
		int max = a[2][0];
		for (j = 1;j < M;j++){
			if (a[2][j] > max)
				max = a[2][j];
		}
		printf("%d",max);
		for (j = 0;j < M;j++){
			if (a[2][j] == max)
				printf(" %d",j + 1);
		}
	}
	else
		printf("Too simple");
	return 0;
}
