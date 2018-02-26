#include <stdio.h>
int main ()
{
	int N, D;
	double E;
	scanf("%d %lf %d",&N,&E,&D);
	double d = 0, e;
	int i , j, n;
	int a[N];
	for (i = 0;i < N;i++){
		scanf("%d",&n);
		for (j = 0;j < n;j++){
			scanf("%lf",&e);
			if (e < E)
				d++;
		}
		if (d > ((n / 2)))
			a[i] = 1;
		else 
			a[i] = 0;
		if (n > D && d > (n / 2))
			a[i] = 2;
		d = 0;
	}
	e = 0;
	for (i = 0;i < N;i++){
		if (a[i] == 1)
			d++;
		if (a[i] == 2)
			e++;
	}
	printf("%.1lf%% %.1lf%%",d * 100 / N,e * 100 / N);
	return 0;
}
