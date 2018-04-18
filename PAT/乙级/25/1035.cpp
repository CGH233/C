#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

void show (int a[], int b[], int n, int t[])
{
	if (t[0] == 1){
		puts("Insertion Sort");
		for (int i = 0;i < n - 1;i++)
			printf("%d ",a[i]);
		printf("%d",a[n - 1]);
	}
	else if (t[0] == 2){
	    puts("Merge Sort");
		for (int i = 0;i < n - 1;i++)
            printf("%d ",b[i]);
        printf("%d",b[n - 1]);
	}
}

void insert_sort (int n,int b[], int c[], int t[])
{
	for (int i = 1, s = 1;i < n && s < n;i++,s++){
		int j = 0;
		while (c[j] < c[i] && j < i){
			j++;
		}
		if (i != j){
			int temp = c[i];
			for (int k = i;k > j;k--){
				c[k] = c[k - 1];
			}
			c[j] = temp;
		}
		for (int l = 0;l < n;l++){
			if (c[l] != b[l])
				l = n + 1;
			if (l == (n - 1)){
				t[0] = 1;
				s = n - 2;
			}
		}
	}
}


void merge_sort (int n,int b[], int a[],int t[])
{
	int x = 1, flag = 1;
    while(flag) {
        flag = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i])
                flag = 1;
        }
        x *= 2;
        for (int i = 0; i < (n / x); i++)
            sort(a + i * x, a + (i + 1) * x);
        sort(a + n / x * x, a + n);
    }
	t[0] = 2;
}

int main ()
{
	int n = 0, i = 0;
	int t[1];
	scanf("%d",&n);
	int a[n], b[n], c[n], d[n];
	for (;i < n;i++){
		scanf("%d",&a[i]);
		c[i] = a[i];
	}
	for (i = 0;i < n;i++){
		scanf("%d",&b[i]);
	}
	insert_sort(n,b,c,t);
	merge_sort(n,b,a,t);
	show(c,a,n,t);
	return 0;
}