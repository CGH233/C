/* 8-5 */
#include <stdio.h>
enum sex {male, female};
enum season {spring, summer, autumn, winter};
enum sex select()
{
    int a;
    int b=0;
    do {
        if (b > 0) {
            printf("别瞎输入啊，你这变态！\n");
        }
        printf("请输入你的性别\n0－男  1－女\n");
        scanf("%d", &a);
        b += 1;
    } while (a < male || a > female);
    return a;
}
int main ()
{
    enum sex selected;
    switch (selected = select()) {
    case male : printf("性别：男\n");    break;
    case female : printf("性别：女\n");    break;
    }
    return 0;
}
