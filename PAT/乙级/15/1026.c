#include<stdio.h>
int main ()
{
	int c1, c2;
	scanf("%d %d", &c1, &c2);
	int a, b, c, d, e;
	e = (c2 - c1) % 100;
	d = (c2 - c1) / 100;
	if ((e / 10) >= 5)
		d++;
	a = d / 3600;
	b = ( d - a * 3600) / 60;
	c = ( d - a * 3600 - b * 60 );
	printf("%02d:%02d:%02d", a, b, c);
	return 0;	
}
