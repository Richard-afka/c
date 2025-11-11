#include<stdio.h>
double l(double num){
    return num*num*num;
}
int main(){
   printf("请输入一个double类型的数：");
   double n;
   scanf("%lf",&n);
   double fact=l(n);
   printf("%lf\n",fact);
   return 0;
}