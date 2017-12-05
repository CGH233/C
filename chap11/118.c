/* 11-5 */
#include <stdio.h>
#include <string.h>
char* str_chr(const char *s, char c)
{
	int i,j;
	for (i = 0,j = 0; i < strlen(s) && s[i] != c; i++);
	if (i < strlen(s))
		return (s + i);
	else
		return NULL;
}
int main ()
{
	char a;
	char s[128];
	printf("请输入字符串：");
	scanf("%s", s);
	getchar();
	printf("请输入要查找的字符：");
	scanf("%c", &a);
	printf("在%s中%c的指针是%p。\n",s,a,str_chr(s,a));
	printf("在%s中%p的字符是%c。\n",s,str_chr(s,a),*str_chr(s,a));	
	return 0;
}
