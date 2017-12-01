/* 9-5 */
#include <stdio.h>
#include <string.h>
#define n 10
int str_char(const char s[], int c)
{
	int i = 0;
	if (i < n){	
		if (s[i] == 'c'){  
			i++;
		}
		return i;
	}else
		return -1; 
}
int main()
{
	char s[n];
	int c;
	printf("请输入一个字符串");
	scanf("%s", s);
	printf("请输入要查找的字符");
	scanf("%c", &c);
	printf("字符%c在下标值%d处。\n",c, str_char(s,c));
	return 0;
}
