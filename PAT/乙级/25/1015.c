#include <stdio.h>
void px (int d[], int c[], int n, int b[], int a[])
{
	int i , j;
	for (i = 0;i < n - 1;i++){
		for (j = n - 1;j > i;j--){
			if ((d[b[j - 1]] + c[b[j - 1]]) > (d[b[j]] + c[b[j]])){
				int temp = b[j];
				b[j] = b[j - 1];
				b[j - 1] = temp;
			}
			else{
				if ((d[b[j - 1]] + c[b[j - 1]]) == (d[b[j]] + c[b[j]])){
					if (d[b[j - 1]] > d[b[j]]){
						 int temp = b[j];
		 				 b[j] = b[j - 1];
		                 b[j - 1] = temp;
					}
					else{
						if (d[b[j - 1]] == d[b[j]]){
							if (a[j - 1] > a[j]){
								int temp = b[j];
								b[j] = b[j - 1];
	  							b[j - 1] = temp;
							}
						}
					}
				}
			}
		}
	}
}
int main ()
{
	int N, L, H, M = 0;
	scanf("%d %d %d", &N, &L, &H);
	int i, j;
	int a[N], d[N], c[N], r[N];
	int b[4][N], e[4] = {0};
	for (i = 0;i < N;i++){
		scanf("%d %d %d",&a[i], &d[i], &c[i]);
		if (d[i] >= L && c[i] >= L){
			r[i] = 4;
			M++;
			if (d[i] >= H && c[i] < H)
				r[i] = 2;
			if (d[i] >= H && c[i] >= H)
					r[i] = 1;
			if (d[i] < H && c[i] < H && d[i] > c[i])
				r[i] = 3;
		}
		else
			r[i] = 5;
	}
	for (i = 0;i < N;i++){
		switch(r[i]){
			case 1 : b[0][e[0]] = i; e[0]++; break;
			case 2 : b[1][e[1]] = i; e[1]++; break;
			case 3 : b[2][e[2]] = i; e[2]++; break;
			case 4 : b[3][e[3]] = i; e[3]++; break;
		}
	}
	printf("%d\n",M);
	int z[N], k;
	for (j = 0;j < 4;j++){
		for (k = 0;k < e[j];k++){
			z[k] = b[j][k];
		}		
		px(d,c,e[j],z,a);
		for (i = e[j] - 1;i > -1;i--){
			printf("%d %d %d\n",a[z[i]],d[z[i]],c[z[i]]);
		}	
	}
	return 0;
}	
