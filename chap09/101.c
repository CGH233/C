/* 9-5 */
#include <stdio.h>
#include <stdlib.h> 
#define n 100
int str_char(const char s[], char c)
{
	int i;	
	for (i = 0;i < n && c != s[i]; i++);
	if (i == n)
		i = -2;
	return i;	
}
int main()
{
	char s[n] = {0};
	char c;
	printf("请输入一个字符串");
	scanf("%s", s);
	getchar();
//	fflush(stdin) ; 
	printf("请输入要查找的字符");
	scanf("%c", &c);
	printf("字符%c在下标值%d处。\n",c, str_char(s,c) + 1);
	return 0;
}
