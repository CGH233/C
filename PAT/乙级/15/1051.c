#include <stdio.h>
#include <math.h>
int main ()
{
	double r1, p1, r2, p2, m, n;
	scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
	m = r1 * r2 * (cos(p1) * cos(p2) - sin(p1) * sin(p2));
	n = r1 * r2 * (sin(p1) * cos(p2) + cos(p1) * sin(p2));
	if (m + 0.005 >= 0 && m < 0)
		printf("0.00");
	else
		printf("%.2lf",m);
	if (n >= 0)
		printf("+%.2lfi",n);
	else{
		if (n + 0.005 >= 0 && n < 0)
			printf("+0.00i");
		else
			printf("%.2lfi",n);
	}
	return 0;
}
