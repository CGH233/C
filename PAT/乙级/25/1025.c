#include <stdio.h>
#include <string.h>

void search (int m,int n,char a[6],char b[][6],char e[][2],char c[][6],char d[][3][6]){
	int i = 0;
	for (;i < n;i++){
		if (strcmp(a,b[i]) == 0){
			strcpy(d[m+1][0],b[i]);
			strcpy(d[m+1][2],c[i]);	
			strcpy(d[m+1][1],e[i]);
			search(m+1,n,c[i],b,e,c,d); //在d中形成正确的顺序	
		}
	}
}

int main ()
{
	int n, k, i, m, j;
	char s[6];
	scanf("%s %d %d",s,&n,&k);
	char address[n][6];
	char data[n][2];
	char next[n][6];
	char right[n][3][6];
	for (i = 0;i < 6;i++){
		scanf("%s %s %s",address[i],data[i],next[i]);
		if (strcmp(next[i],"-1") != 0){
			if (strlen(address[i]) != 5 && strlen(next[i]) != 5)
				n--;
		}
		if (strcmp(address[i],s) == 0){
			m = i;
		}
	}
	strcpy(right[0][0],address[m]);
	strcpy(right[0][2],next[m]);
	strcpy(right[0][1],data[m]);
	search(0,n,next[m],address,data,next,right);
	int x = n / k;
	int y = n % k;
	for (j = 0;j <= x;j++){
		if (j < x){
			for (i = 1;i <= k;i++){
				printf("%s %s ",right[(j + 1) * k - i][0],right[(j + 1) * k - i][1]);
				if (i < k)
					printf("%s\n",right[(j + 1) * k - i - 1][0]);
				else
					printf("%s\n",right[(j + 1) * k][0]);
			}
		}
		else{
			for (i = 0;i < y;i++)
				printf("%s %s %s\n",right[j * k + i][0],right[j * k + i][1],right[j * k + i][2]);
		}

	}
	return 0;
}
