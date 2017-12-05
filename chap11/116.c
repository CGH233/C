/* 11-3 */
#include <stdio.h>
#include <string.h>
void put_string (const char *s)
{
	int i;
	for (i = 0; i < strlen(s); i++) {
		printf("%c", *(s + i));
	}
}
int main ()
{
	char s[100];
	printf("输入字符串：");
	scanf("%s", s);
	put_string(s);
	puts("");
	return 0;
}
