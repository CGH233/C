#include <stdio.h>
int main ()
{
	int N;
	scanf("%d",&N);
	int i, jw = 0, yw = 0, pj = 0;
	int c[2] = {0}, d[2] = {0}, b[2] = {0};
	char j[N][2], y[N][2];
	for (i = 0;i < N;i++){
		scanf("%s %s",j[i],y[i]);
	}
	for (i = 0;i < N;i++){
		if (j[i][0] != y[i][0]){
			if (j[i][0] == 'C'){
				if (y[i][0] == 'J'){
					jw++;
					c[0]++;
				}
				else{
					yw++;
					b[1]++;
				}
			}
			else{
				if (j[i][0] == 'J'){
					if (y[i][0] == 'C'){
						yw++;
						c[1]++;
					}
					else{
						jw++;
						d[0]++;
					}
				}
				else{
					if (y[i][0] == 'J'){
						yw++;
						d[1]++;
					}
					else{
						jw++;
						b[0]++;
					}
				}
			}
		}
		else{
			pj++;
		}
	}
	printf("%d %d %d\n",jw,pj,yw);
	printf("%d %d %d\n",yw,pj,jw);
	if (d[0] > c[0]){
		if (d[0] > b[0])
			printf("J ");
		else
			printf("B ");
	}
	else{
		if (c[0] > b[0])
			printf("C ");
		else
			printf("B ");
	}
	if (d[1] > c[1]){
		if (d[1] > b[1])
			printf("J");
		else
			printf("B");
	}
	else{
		if (c[1] > b[1])
			printf("C");
		else
			printf("B");
	}
	return 0;
}
