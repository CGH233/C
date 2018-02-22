#include<stdio.h>
#include<math.h>
int main(){
    int p, p1, p2, p3;
    int a, a1, a2, a3;
    scanf("%d.%d.%d",&p1,&p2,&p3);
    scanf("%d.%d.%d",&a1,&a2,&a3);
    p = p1 * 17 * 29 + p2 * 29 + p3;
    a = a1 * 17 * 29 + a2 * 29 + a3;
    int ans = a - p;
    printf("%d.%d.%d",ans / (17 * 29),((int)(fabs(ans)) % (17 * 29)) / 29,(int)(fabs(ans)) % 29);
    return 0;
}
