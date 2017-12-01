/* 9-12 */
#include <stdio.h>
#define n 3
void rev_string(char s[][128])
{
	int i,j,k;
	char t;
	for (i = 0, j = 0,k = 0; i < n; i++){
		while (s[i][j])
			j++;
		j--;
		for (k = 0; k <= j / 2; k++) {
			t = s[i][k];
			s[i][k] = s[i][j - k];
			s[i][j - k] = t;
		}
	}	
}
int main ()
{
	int i;
	char str[n][128];
	for (i = 0; i < n; i++){
		printf("请输入str[%d]：",i);
		scanf("%s", str[i]);
	}

	rev_string(str);
	printf("反转：{");
	for (i = 0; i < n; i++) {
		printf("\"%s\"",str[i]);
		if (i < n - 1)
			putchar(',');
	}
	printf("}\n");
	return 0;
}
