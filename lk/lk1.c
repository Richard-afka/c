#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int date=n%7;
    int week=n/7;
    int money=0;
    for(int i=0;i<week;i++){
       money+=28+7*i;
    }
    for(int i=1;i<=date;i++){
        money+=week+i;
    }
    printf("%d\n",money);
}