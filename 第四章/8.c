#include<stdio.h>
#define bili 378.5/1.609
int main(){
    printf("请输入里程数：\n");
    double s,t;
    scanf("%lf",&s);
    printf("请输入消耗汽油量：\n");
    scanf("%lf",&t);
    double ave=s/t;
    printf("%.1f\n",ave);
    double h=bili/ave;
    printf("%.1f\n",h);
    return 0;
}