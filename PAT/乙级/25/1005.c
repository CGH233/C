#include<stdio.h>
void sort(int a[],int n)
{
	int i, j;
	for (i = 0;i < n;i++){
		for (j = 0;j > i;j++){
			if (a[j - 1] < a[j]){
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
			printf("%d ",a[i]);
		}
	}
}
int main()
{
    int a, i = 0, j = 0, q = 0;
	int k;
	scanf("%d",&k);
	int m[k];
	int b[100] = {0};
	int c[k];
	for (i = 0;i < k;i++){
    	scanf("%d", &m[i]);
	}               
	for (i = 0;i < k;i++){
		a = m[i];
		while (a > 1){
			if (a % 2) { 
				a = (3 * a + 1) / 2;
				b[q] = a;
				q++;
			}
			else{
				a = a / 2;
				b[q] = a;
				q++;
			}
		}
	}
	q = 0;
	while (i < k){
		for (;j < 100;j++){
			if (b[j] != m[i] && j == 99){
				c[q] = m[i];
				q++;
			}
		}
		i++;
	}
//	sort(c,k);
	for (i = 0;i < k;i++){
		if (c[i])
			printf("%d ", c[i]);
	}
    return 0;
}
