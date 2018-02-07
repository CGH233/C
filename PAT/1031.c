#include <stdio.h>
#include <string.h>
int main ()
{
	int n, i, j, z, q = 0;
	scanf("%d", &n);
	char a[n][128];
	char b[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
	for (i = 0;i < n;i++){ 
		scanf("%s", a[i]);
	}
	for (i = 0;i < n;i++){
		for (j = 0,z = 0;j < 17;j++){
			z = z + (a[i][j] - '0') * b[j];
		}
		z = z % 11;
		switch (z){
			case 0 : if (a[i][17] != '1') {printf("%s\n", a[i]);q++;} continue;
			case 1 : if (a[i][17] != '0') {printf("%s\n", a[i]);q++;} continue;
			case 2 : if (a[i][17] != 'X') {printf("%s\n", a[i]);q++;} continue;
			case 3 : if (a[i][17] != '9') {printf("%s\n", a[i]);q++;} continue;
			case 4 : if (a[i][17] != '8') {printf("%s\n", a[i]);q++;} continue;
			case 5 : if (a[i][17] != '7') {printf("%s\n", a[i]);q++;} continue;
			case 6 : if (a[i][17] != '6') {printf("%s\n", a[i]);q++;} continue;
			case 7 : if (a[i][17] != '5') {printf("%s\n", a[i]);q++;} continue;
			case 8 : if (a[i][17] != '4') {printf("%s\n", a[i]);q++;} continue;
			case 9 : if (a[i][17] != '3') {printf("%s\n", a[i]);q++;} continue;
			case 10 : if (a[i][17] != '2') {printf("%s\n", a[i]);q++;} continue;
		}
	}
	if (q == 0)
		printf("All passed");
	return 0;
}
