#include<stdio.h>
int gcd(int a, int b){
    int r;
    if(a<b){r=a;a=b;b=r;}
    r=a%b;
    while(r){a=b;b=r;r=a%b;}
    return b;
}
void stdPrint(int a, int b, int signId){
    int r,k;
    if(signId)
       printf("(-");
    if(a==0)
       printf("0");
    else{
       r=gcd(a,b);
       a/=r; b/=r;
       if(b==1)
          printf("%d",a);
       else{
          k=a/b;
          if(k)
            printf("%d %d/%d",k,a%b,b);
          else
            printf("%d/%d",a,b);}
        }
     if(signId)
       printf(")");    
}
void Operator(int a1,int b1, int signId1, int a2, int b2, int signId2, char c){
     int temp1,temp2,signId=0;
     stdPrint(a1,b1,signId1);
     printf(" %c ",c);
     stdPrint(a2,b2,signId2);
     printf(" = ");
     if(signId1) a1*=-1;
     if(signId2) a2*=-1;
     switch(c){
        case '+':
           temp1=a1*b2+a2*b1;
           temp2=b1*b2;
           if(temp1<0){temp1*=-1;signId=1;}
           stdPrint(temp1,temp2,signId);
           break;
        case '-':
            temp1=a1*b2-a2*b1;
            temp2=b1*b2;
            if(temp1<0){temp1*=-1;signId=1;}
            stdPrint(temp1,temp2,signId);
            break;
        case '*':
             temp1=a1*a2;
             temp2=b1*b2;
             if(temp1<0){temp1*=-1;signId=1;}
             stdPrint(temp1,temp2,signId);
             break;
        case '/':
             if(a2){
                temp1=a1*b2;
                temp2=b1*a2;
                if(temp1*temp2<0){signId=1;}
                if(temp1<0) temp1*=-1;
                if(temp2<0) temp2*=-1;
                stdPrint(temp1,temp2,signId); 
             }else
                printf("Inf");
             break;}
         printf("\n");
}
 
 
int main(){
    int a1,b1,signId1,a2,b2,signId2;
    char c;
    a1=0;signId1=0;
    scanf("%c",&c);
    if(c=='-') signId1=1;
    else a1=c-'0';
    scanf("%c",&c);
    while(c!='/'){
        a1=10*a1+(c-'0');
        scanf("%c",&c);
    }
    b1=0;
    scanf("%c",&c);
    while(c!=' '){
        b1=10*b1+(c-'0');
        scanf("%c",&c);
    }
    a2=0;signId2=0;
    scanf("%c",&c);
    if(c=='-') signId2=1;
    else a2=c-'0';
    scanf("%c",&c);
    while(c!='/'){
        a2=10*a2+(c-'0');
        scanf("%c",&c);
    }
    b2=0;
    scanf("%c",&c);
    while(c!='\n'){
        b2=10*b2+(c-'0');
        scanf("%c",&c);
    }
 
    Operator(a1,b1,signId1,a2,b2,signId2,'+');
    Operator(a1,b1,signId1,a2,b2,signId2,'-');
    Operator(a1,b1,signId1,a2,b2,signId2,'*');
        Operator(a1,b1,signId1,a2,b2,signId2,'/');
}
