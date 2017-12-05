/* 11-2 */
#include <stdio.h>
int main ()
{
	int i=0,j=0,k=0;
	char a[][5] = {"LISP", "C", "Ada"};
	char *p[] = {"PAUL", "X", "MAX"};
	while (a[i][0] != 'A'){
		j++;
		i++;
	}
	i=0;
	while (*p[i++] != 'M')
		k++;
	for (i = 0;i <= j; i++)
		printf("a[%d] = \"%s\"\n", i, a[i]);
	for (i = 0;i <= k; i++)
		printf("p[%d] = \"%s\"\n", i, p[i]);
	return 0;
}
