/* 9-4 */
#include <stdio.h>
void null_string(char s[]) 
{
	 s[0] = '\0';
}
int main ()
{
	char s[10];
	printf("输入一个字符串:");
	scanf("%s",s);
	printf("\"%s\"\n",s);
	null_string(s);
	printf("\"%s\"\n", s);
	return 0;
}
