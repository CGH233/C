#include <stdio.h>
int main()
{
	int i, j, k = 0, l = 0, m = 0;
	char a[4][61];
	int b[2];
	char *p;
	char c[25] = "0123456789ABCDEFGHIJKLMN";
	for (i = 0;i < 4;i++){
		scanf("%s",a[i]);
	}
	for (i = 0;i < 61;i++){
		while (a[0][i] && a[1][i]){
			if (a[0][i] == a[1][i] && k == 0 && a[0][i] >= 'A' && (a[0][i] <= 'G')){
				switch (a[0][i]){
					case 'A': p = "MON"; break;
					case 'B': p = "TUE"; break;
					case 'C': p = "WED"; break;
					case 'D': p = "THU"; break;
					case 'E': p = "FRI"; break;
					case 'F': p = "SAT"; break;
					case 'G': p = "SUN"; break;
				}
				k++;
			}
			if (a[0][i] == a[1][i] && m <= 1 && k > 0){
				for (j = 0;j < 24;j++){
					if (a[0][i] == c[j]){
						b[0] = j;
						m++;
						break;
					}
				}
				break;
			}
			break;
		}
		while (a[2][i] && a[3][i]){
			if (a[2][i] == a[3][i] && l == 0 && a[2][i] >= 'A' && a[2][i] <= 'z'){
				b[1] = i;
				l++;
				break;
			}
			break;
		}
	}
	if (b[1] > 9){
		if (b[0] > 9)
			printf("%s %d:%d",p,b[0],b[1]);
		else
			printf("%s 0%d:%d",p,b[0],b[1]);
	}
	else{
		if (b[0] > 9)
			printf("%s %d:0%d",p,b[0],b[1]);
		else
			printf("%s 0%d:0%d",p,b[0],b[1]);
	}
	return 0;
}
