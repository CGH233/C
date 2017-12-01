/* 9-8 */
#include <stdio.h>
#define n 128
void put_stringr(const char s[])
{
	int i = 0;
	while (s[i])
		i++;
	while (i + 1)
		putchar(s[i--]);
}
int main ()
{
	char str[n] = {0};
	printf("请输入字符串：");
	scanf("%s", str);
	printf("你输入了");
	put_stringr(str);
	printf("。\n");
	return 0;
}
