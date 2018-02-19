#include <stdio.h>
int main ()
{
	int N, i, j; //N个学生
	int M; //取M个学生
	scanf("%d", &N);
	char a[N][15];
	int b[N];
	int c[N];
	for (i = 0;i < N;i++){
		scanf("%s",a[i]); //学生准考证号
		scanf("%d",&b[i]); //学生试机号
		scanf("%d",&c[i]); //学生考试座位号
	}
	scanf("%d",&M);
	int d[M];
	for (i = 0;i < M;i++){
		scanf("%d",&d[i]); //待查询的试机号
	}
	for (i = 0;i < M;i++){
		for (j = 0;j < N;j++){
			if (b[j] == d[i]){
				printf("%s %d\n",a[j],c[j]);
			}
		}
	}
	return 0;
}
