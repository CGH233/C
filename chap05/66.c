/* 5-11 */
#include <stdio.h>
#define n 6
int main()
{
    int i, j, sum;
    int student[n][2];
    puts("请输入数学，语文成绩。"); 
    for (i = 0; i < n; i++) {
        printf("%d号同学的数学：", i + 1);
        scanf("%d", &student[i][1]);
        printf("%d号同学的语文：", i + 1);
        scanf("%d", &student[i][2]);
    }
    for (i = 0,sum = 0; i < n; i++) {
        sum += student[i][1];
    } printf("数学总分：%d。\n",sum);
    printf("数学平均分：%.2f。\n",(double) sum / n);
    for (i = 0,sum = 0; i < n; i++) {
        sum += student[i][2];
    } printf("语文总分：%d。\n",sum);
    printf("语文平均分：%.2f。\n",(double) sum / n);
    for (i = 0,sum = 0; i < n; i++) {
        printf("%d号同学的总分：%d。\n",i + 1, student[i][1] + student[i][2]);
        printf("%d号同学的平均分：%.2f。\n",i + 1, (student[i][1] + student[i][2]) / 2.0);
    }
    return 0;
}
        
