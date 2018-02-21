#include <stdio.h>
int main ()
{
	int a[10];
	int i, j;
	for (i = 0;i < 10;i++){
		scanf("%d",&a[i]);
	}
	for (i = 1;i < 10;i++){
		if (a[i] != 0){
			printf("%d",i);
			a[i] = a[i] - 1;
		}
		break;
	}
	for (i = 0;i < 10;i++){
		if (a[i] != 0){
			for (j = 0;j < a[i];j++)
				printf("%d",i);
		}
	}
	return 0;
}

