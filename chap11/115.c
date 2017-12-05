/* 11-3 */
#include <stdio.h>
char *str_copy(char *d, const char *s)
{
	char *t = d;
	while (*d++ = *s++)
		;
	return t;
}
int main()
{
	char ptr[128] = "1234";
	char tmp[128];
	printf("ptr = \"%s\"\n", ptr);
	printf("复制的是：");
	scanf("%s", tmp);
	puts("复制了。");
	printf("ptr = \"%s\"\n", str_copy(ptr, tmp));
	return 0;
}
