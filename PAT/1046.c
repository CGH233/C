#include <stdio.h>
int main ()
{
	int N;
	int m = 0, n = 0, i;
	scanf("%d",&N);
	int a[N],A[N],b[N],B[N];
	for (i = 0;i < N;i++){
		scanf("%d %d %d %d",&a[i],&A[i],&b[i],&B[i]);	
	}
	for (i = 0;i < N;i++){
		if ((a[i] + b[i]) == A[i]){
			if ((a[i] + b[i]) != B[i])
				n++;
		}
		else{
			if ((a[i] + b[i]) == B[i])
				m++;
		}
	}
	printf("%d %d",m,n);
	return 0;
}
