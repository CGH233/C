/* 9-3 */
#include <stdio.h>
#include <string.h>
#define n 5
int main ()
{
    int i,j;
    char s[n][200];
    for(i = 0; i<n; i++){
        printf("s[%d]:", i);
        scanf("%s", s[i]);
        if(!strcmp(s[i], "$$$$$")){
            break;
        }
    }
    for (j = 0; j < i; j++) {
        printf("s[%d] =\"%s\"\n", j, s[j]);
    }return 0;
}
