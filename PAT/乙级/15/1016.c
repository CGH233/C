#include <stdio.h>
#include <math.h>
int main()
{
	int i, ch;
	char a[10] = {0};
	char b[10] = {0};
	int c, d;
	scanf("%s %d %s %d", a, &c, b, &d);
    int s[10] = {0};	
	int u[10] = {0};
	for (i = 0; i < 10;i++ ){
		switch (a[i]) {
			case '0' : s[0]++; break;
			case '1' : s[1]++; break;
			case '2' : s[2]++; break;
			case '3' : s[3]++; break;
			case '4' : s[4]++; break;
			case '5' : s[5]++; break;
			case '6' : s[6]++; break;
			case '7' : s[7]++; break;					  
			case '8' : s[8]++; break;
			case '9' : s[9]++; break;
		}
	}
	for (i = 0; i < 10;i++ ){
		switch (b[i]) {
			case '0' : u[0]++; break;
			case '1' : u[1]++; break;
			case '2' : u[2]++; break;
			case '3' : u[3]++; break;
			case '4' : u[4]++; break;
			case '5' : u[5]++; break;
			case '6' : u[6]++; break;
			case '7' : u[7]++; break;					  
			case '8' : u[8]++; break;
			case '9' : u[9]++; break;
		}
	}
	int j;
	long long pa = 0, pb = 0;
	for ( i = 0; i < 10 ; i++ ){
		if (c == i) {
			for ( j = 0; j < s[i];j++ ){
				pa += i * (pow(10,j));
			}
		}
		if (d == i) {
			for ( j = 0; j < u[i];j++ ){
				pb += i * (pow(10,j));
			}
		}
	}
	printf("%lld", pa + pb);
	return 0;
}
