#include <stdio.h>

int main()
{
    int a, n;
    scanf("%d", &a);
    n = 0;
    while (a > 1){
		if (a % 2) { 
            a = (3 * a + 1) / 2;
			n = n + 1;
        }
        else{
	        a = a / 2;
	        n = n + 1;
        }
	} 
    printf("%d", n);
    return 0;
}

