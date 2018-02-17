#include <stdio.h>
int main()
{
	int N, i, a1 = 0, a2 = 0, a3 = 0, a5 = 0, j = 0, n = 0;
	double a4 = 0;
	scanf("%d",&N);
	int a[N];
	for (i = 0;i < N;i++){
		scanf("%d",&a[i]);
	}
	for (i = 0;i < N;i++){
		if ((a[i] % 5) == 0 && (a[i] % 2) == 0)
			a1 += a[i]; 
		if ((a[i] % 5) == 1){
			if (j % 2){
				a2 -= a[i];
				j++;
			}
			else{
				a2 += a[i];	
				j++;
			}	
		}
		if ((a[i] % 5) == 2)
			a3++;
		if ((a[i] % 5) == 3){
			a4 += a[i];
			n++;
		}	
		if ((a[i] % 5) == 4){
			if (a[i] > a5)
				a5 = a[i];
		}
	}
	if (n != 0)
		a4 = a4 / n;
	if (a1 != 0)
		printf("%d ",a1);
	else 
		printf("N ");
	if (a2 != 0)
		printf("%d ",a2);
	else
		printf("N ");
	if (a3 != 0)
		printf("%d ",a3);
	else 
		printf("N ");
	if (a4 != 0)
		printf("%.1lf ",a4);
	else 
		printf("N ");
	if (a5 != 0)
		printf("%d",a5);
	else
		printf("N");
	return 0;
}
