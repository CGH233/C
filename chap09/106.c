/* 9-10 */
#include <stdio.h>
#define n 100
void del_digit(char s[])
{
	unsigned i = 0;
	unsigned j;
	while (s[i]){
		if (s[i] >= '0' && s[i] <= '9'){
			j = i;
			while (s[j]){
				s[j] = s[j + 1];
				j++;
			}
			i--;
		}
		i++;
	}
}
int main()
{
	char str[n];
	printf("请输入一个字符串：");
	scanf("%s", str);
	del_digit(str);
	printf("除去数字字符后：%s\n",str);
	return 0;
}
