#include <stdio.h>
#include <string.h>
int main ()
{
	char a[2][27] = {"abcdefghijklmnopqrstuvwxyz","ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int i, j, n, s;
	char b[100000];
	scanf("%[^\n]",b);
	n = strlen(b);
	for (i = 0;i < n;i++){
		for (j = 0;j < 26;j++){
			if (a[0][j] == b[i] ||a[1][j] == b[i])
				s += (j + 1);
		}
	}
	int c[2];
	c[0] = 0;
	c[1] = 0;
	while(s != 0){  
		i = s % 2;  
		if (i == 0)
			c[0]++; 
		if (i == 1)
			c[1]++;	
		s = s / 2;  
	}
	printf("%d %d",c[0],c[1]);  
	return 0;
}
