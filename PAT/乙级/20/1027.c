#include <stdio.h>
int main ()
{
	int N, i, j = 1, n = 0, m, k;
	char a[2];
	scanf("%d %s",&N,a);
	for (i = 1;(j + (i + 2) * 2 ) <= N;i += 2){
		j += 2 * (i + 2);
		n++;
	}
	k = j;
	m = i;
	for (;i >= 1;i -= 2){
		if (i == m){
			for (j = 0;j < i;j++)
				printf("%c",a[0]);
		}
		else{
			for (j = 0;j < m;j++){
				if (j < ((m + 1) / 2 - (i + 1) / 2) || j >= ((m + 1) / 2 + ((i - 1) / 2)))
					printf(" ");
				else
					printf("%c",a[0]);
			}
		}
		printf("\n");
	}
	for (i = 3;i <= m;i += 2){
		if (i == m){
			for (j = 0;j < i;j++)
				printf("%c",a[0]);
		}
		else{
			for (j = 0;j < m;j++){
				if (j < ((m + 1) / 2 - (i + 1) / 2) || j >= ((m + 1) / 2 + ((i - 1) / 2)))
					printf(" ");
				else
					printf("%c",a[0]);
			}
		}
		printf("\n");
	}

	printf("%d",N - k);
	return 0;
	
}
