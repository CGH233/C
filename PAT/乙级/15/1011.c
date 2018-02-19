#include <stdio.h>
int main()
{
	long long t, a, b, c, i;
	long long v[10];
	scanf("%lld", &t);
	for (i = 0; i < t; i++){
        scanf("%lld %lld %lld", &a, &b, &c); 
		v[i] = a + b - c;
	}
	for (i = 0; i < t; i++){
		printf("Case #%lld: ", i + 1);
		if (v[i] > 0)
			printf("true\n");
		else
			printf("false\n");
	}
	return 0;
}
