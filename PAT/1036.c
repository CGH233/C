#include <stdio.h>
int main()
{
	int a, c, i, j;
	char b[128];
	scanf("%d %s", &a, b);
	if ((a % 2) == 0)
		c = a / 2;
	else
		c = (a + 1) / 2;
	for (j = 0;j < c;j++){
			for (i = 0;i < a;i++){
				if (j == 0 || j == (c - 1))
					printf("%c",b[0]);
				else{
					if (i == 0 || i == (a - 1))
						printf("%c",b[0]);
					else
						printf(" ");
				}
			}
			printf("\n");
	}
	return 0;
}
