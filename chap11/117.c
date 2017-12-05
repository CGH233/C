/* 11-5 */
#include <stdio.h>
#include <string.h>
int str_chnum(const char *s, char c)
{
	int i,j;
	for (i = 0,j = 0; i < strlen(s); i++){
		if (s[i] == c)
			j++;
	}
	return j;
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
	printf("在%s中有%d个%c。\n",s,str_chnum(s,a),a);
	return 0;
}
