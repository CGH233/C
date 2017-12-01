/* 9-6 */
#include <stdio.h>
#define n 100
int str_chnum(const char s[], int c)
{
	int i,j;
	for (i = 0, j = 0; i < n; i++) {
		if (s[i] == c)
			j++;
	}
	return j;
}
int main()
{
	char s[n];
	char c;
	printf("请输入字符串：");
	scanf("%s", s);
	getchar();
	printf("请输入要计数的字符：");
	scanf("%c", &c);
	printf("字符串%s中有%d个。\n",s,str_chnum(s,c));
	return 0;
}
