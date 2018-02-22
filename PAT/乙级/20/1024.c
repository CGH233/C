#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
	char a[10000];
	scanf("%s",a);
	long l = strlen(a), i, j, k = 0;
	long m = 0, n = 1;
	long double s = (long double)(a[1] - '0');
	for (i = 0;i < l;i++){
		if (a[i] == 'E')
			j = i;
	}
	while (a[j - k - 1] == '0'){
		k++;
	}
	for (i = 3;i < j;i++)
		s += (long double)(a[i] - '0') * pow(10,(2 - i));
	if (a[0] == '-')
		n = -1;
	s *= n;
	for (i = j + 2;i < l;i++){
		m += (long)(a[i] - '0') * pow(10,(l - i - 1));
	}
	if (a[j + 1] == '+')
		n = 1;
	else
		n = -1;
	m *= n;
	if ((j - 3) > m){
		printf("%llf",s * pow(10,m));
		for (i = 0;i < k;i++)
			printf("0");
	}
	else{
			printf("%.0llf",s *pow(10,m));
		}
	return 0;
}
