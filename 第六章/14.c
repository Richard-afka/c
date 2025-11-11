#include<stdio.h>
int main(){
    int num[8];
    for(int i=0;i<8;i++){
        scanf("%d",&num[i]);
    }
    int sum[8];
    sum[0]=num[0];
    for(int i=1;i<8;i++){
        sum[i]=num[i]+sum[i-1];
    }
    for(int i=0;i<8;i++){
        printf("%d ",sum[i]);
    }
    return 0;
}