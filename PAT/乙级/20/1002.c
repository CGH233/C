#include<stdio.h>
#include <string.h>
int swxj (const char a[])
{
	int i, j = 0;
	for (i = 0; i < strlen(a); i++){
		j += a[i] - '0';	
	}
	return j;
}
int sw (int k)
{
	int j = 1;
	while (k / 10 > 0){
		k /= 10;
		j++;
	}
//	printf("%d", j);
	return j;
}
void py (int n)
{
	int i,j, k = n;
	j = sw(k);
	char a[j][128];
	for (i = 0; i < j; i++){
		switch(n % 10){
			case 1 : memcpy(a[j - i - 1], "yi", strlen("yi") + 1);		break;
			case 2 : memcpy(a[j - i - 1], "er", strlen("er") + 1);		break;
			case 3 : memcpy(a[j - i - 1], "san", strlen("san") + 1);	break;	
			case 4 : memcpy(a[j - i - 1], "si",  strlen("si") + 1);		break;	
			case 5 : memcpy(a[j - i - 1], "wu",  strlen("wu") + 1);		break;
			case 6 : memcpy(a[j - i - 1], "liu", strlen("liu") + 1);	break;
			case 7 : memcpy(a[j - i - 1], "qi",  strlen("qi") + 1);		break;
			case 8 : memcpy(a[j - i - 1], "ba",  strlen("ba") + 1);		break;
			case 9 : memcpy(a[j - i - 1], "jiu", strlen("jiu") + 1);	break;
			case 0 : memcpy(a[j - i - 1], "ling", strlen("ling") + 1);	break;	 
		}
		n /= 10;
	}
	for (i = 0; i < j; i++){
		printf("%s", a[i]);
		if (i < j - 1)
			putchar(' ');
	}
}
int main()
{
	int i, j, k;
	char a[128];
	scanf("%s", a);
	j = swxj(a);
//	printf("%d\n",j);
	py(j);
	return 0;
}	
