#include<stdio.h>
#include<string.h>
int bigger(char a[],char b[])
{
    int cmp;
    cmp=strcmp(a,b);
    if(cmp>0)
        return 1;
    else
        return 0;
}
int main()
{
	int i,N,flag=0,count=0;
    char name[6]={0},old[6]={0},young[6]={0};
    char time[11],big[11]={"2014/09/07"},small[11]={"1814/09/05"};
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%s %s",name,time);
        if(bigger("2014/09/07",time)&&bigger(time,"1814/09/05")){
            count++;
            if(bigger(big,time)){
                strcpy(big,time);
                strcpy(old,name);
            }
            if(bigger(time,small)){
                strcpy(small,time);
                strcpy(young,name);
            }
        }
    }
    if(count!=0)
        printf("%d %s %s",count,old,young);
    else
        printf("0");
	return 0;
}
