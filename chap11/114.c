/* 11-2 */
//这题没想出来。。。
#include <stdio.h>
int main ()
{
	int i,j,k;
	char a[][5] = {"LISP", "C", "Ada"};
	char *p[] = {"PAUL", "X", "MAX"};
	j = sizeof(a);
	k = sizeof(p);
	printf("%d\n",k);
	for (i = 0;i < j / 5; i++)
		printf("a[%d] = \"%s\"\n", i, a[i]);
	for (i = 0;i < k / 8 ; i++)
		printf("p[%d] = \"%s\"\n", i, p[i]);
	return 0;
}
