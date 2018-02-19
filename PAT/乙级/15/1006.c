#include <stdio.h>
int main()
{
	int n, i, m, j = 0, a;
	scanf("%d", &m);
	a = m;
	while (m > 0){
		j++;
		m /= 10;
	}
	switch(j){
		case 3 : n = a / 100 ; for (i = 0;i < n;i++ ){putchar('B');}; a = a - n * 100;
		case 2 : n = a / 10;  for (i = 0;i < n;i++ ){putchar('S');}; a = a - n * 10;
		case 1 : for (i = 1;i <= a;i++ )printf("%d", i); break; 
	}
	return 0;
}
