/* 9-9 */
#include <stdio.h>
void rev_string(char s[])
{
	int i = 0,j;
	char t;
	while (s[i])
		i++;
	i--;
	for (j = 0;j <= i / 2; j++) {
		t = s[j];
		s[j] = s[i - j];
		s[i - j] = t;
	}
}
int main ()
{
	char str[128] = {0};
	printf("请输入字符串：");
	scanf("%s", str);
	rev_string(str);
	printf("反转：%s\n", str);
	return 0;
}
