/* 9-5 */
#include <stdio.h>
#include <string.h>
#define n 100
int str_char(const char s[], int c)
{
	int i;	
	for (i = 0;i < n && s[i] != c; i++);
	if (i == n)
		i = -1;
	return i;	
}
int main()
{
	char s[n];
	int c;
	printf("请输入一个字符串");
	scanf("%s", s);
	printf("请输入要查找的字符");
	scanf("%d", &c);
	printf("字符%c在下标值%d处。\n",c, str_char(s,c));
	return 0;
}
