#include<stdio.h>
double power(double n,int p){
    int count=0;
    double pi=1;
    if(p<0){
        p=-p;
        count=1;
    }
    if(n==0){
            if(p==0){
             printf("未定义，处理为:\n");
             pi=1;
             
            }
            pi=0;
    }
    if(p==0){
            pi=1;
        }
    for(int i=1;i<=p;i++){
       pi*=n;
    }
    if(count){
        return 1/pi;
    }
    return pi;  
}
int main(){
    double n;
    int p;
    while((scanf("%lf %d",&n,&p))==2){
    double fact=power(n,p);
    printf("%.2lf\n",fact);
    return 0;
}
}