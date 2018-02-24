#include <stdio.h>
int main ()
{
	char a[2][27] = {"abcdefghijklmnopqrstuvwxyz","ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int b[26] = {0};
	char v[1001] = {0};
	scanf("%[^\n]",v);
	int i, j, max, n;
	for (i = 0;i < 1000;i++){
		for (j = 0;j < 26;j++){
			if (v[i] == a[0][j] || v[i] == a[1][j]){
				b[j]++;
			}
		}
	}
	max = b[0];
	for (j = 0;j < 26;j++){
		if (b[j] > max){
			max = b[j];
			n = j;
		}
	}
	printf("%c %d",a[0][n],max);
	return 0;
}
