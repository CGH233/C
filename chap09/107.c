/* 9-11 */
#include <stdio.h>
#include <string.h>
#define q 3
#define m 6
void put_strary3(const char s[][m], int n)
{
	int i;
	for (i = 0; i < n; i++){
		int j = 0;
		if (!strcmp(s[i],"$$$$$")){
			break;
		}
		else{
			printf("s[%d] = \"", i);
			while (s[i][j])
				putchar(s[i][j++]);
			puts("\"");
		}
	}
}
int main()
{
	char cs[][m] = {"Turbo","$$$$$","DOHC"};
	put_strary3(cs,q);
}
