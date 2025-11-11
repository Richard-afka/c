#include<stdio.h>
double powe(double n,int p){
    if(p==1){
        return n;
    }
    return n*powe(n,p-1);
}
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
             return 1;
            }
            pi=0;
    }
    if(p==0){
            return 1;
        }
     pi=powe(n,p);
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