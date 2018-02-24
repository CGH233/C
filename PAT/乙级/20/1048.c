#include <stdio.h>
#include <string.h>
int main ()
{
	char a[101];
	char b[101];
	scanf("%s %s",a,b);
	int i, j, m = strlen(a), n = strlen(b);
	int min = m < n ? m:n;
	int c[min];
	for (i = 0;i < min;i++){
		c[min - 1 - i] = 0;
		if ((i + 1) % 2)
			c[min - 1 - i] = (a[m - 1 - i] + b[n - 1 - i] - 2 * '0') % 13;
		else{
			if ((b[n - 1 - i] - a[m - 1 - i]) > 0)
				c[min - 1 - i] = b[n - 1 - i] - a[m - 1 - i];
			else
				c[min - 1 - i] = b[n - 1 - i] - a[m - 1 - i] + 10;
		}
	}
	for (i = 0;i < n - m;i++){
		printf("%c",b[i]);
	}
	for (i = 0;i < min;i++){
		if (c[i] < 10)
			printf("%d",c[i]);
		else{
			switch (c[i]){
				case 10 : printf("J"); break;
				case 11 : putchar('Q'); break;
				case 12 : putchar('K'); break;
			}
		}
	}		
	return 0;
}
