#include <stdio.h>
#include <stdlib.h>

int effect(char a[]) 
{
    int dot = 0, i = 0, n1 = 0, n2 = 0;
    if (a[0] == '-') 
		i = 1;
    for (; a[i] != '\0'; i++) {
        if ((a[i] < 48 || 57 < a[i]) && a[i] != '.') 
			return 0;
        if (dot == 1 && a[i] == '.') 
			return 0;
        if (dot > 0) 
			n1++;
        if (a[i] == '.') 
			dot = 1;
        if (dot == 0) 
			n2++;
    }
    if (n1 > 2) return 0;
    if (atof(a) < -1000.0 || atof(a) > 1000.0) return 0;
    return 1;
}

int main()
{
    int n, cnt = 0;
    double sum = 0.0f, v;
    char tmp[101] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++){ 
        scanf("%s", tmp);
        if (effect(tmp)){
            sum += atof(tmp);
			cnt++;
		}
        else 
			printf("ERROR: %s is not a legal number\n", tmp);
    }
    v = sum / cnt;
    printf("The average of %d number", cnt);
    if (cnt == 0)
		printf("s is Undefined\n"); 
    if (cnt == 1) 
		printf(" is %.2f\n", v);
    if (cnt >= 2) 
		printf("s is %.2f\n", v);
    return 0;
}
