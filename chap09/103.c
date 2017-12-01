/* 9-7 */
#include <stdio.h>
void put_stringn(const char s[], int n)
{
	int i = 0,j = 0;
	while (i < n) {
		j = 0 ; 
		while (s[j])
			putchar(s[j++]);
		i++;
	}
}
int main ()
{
	char str[128];
	int n;
	printf("请输入字符串：");
	scanf("%s", str);
	printf("输出次数：");
	scanf("%d", &n);
	printf("你输入了");
	put_stringn(str,n);
	printf("。\n");
	return 0;
}
