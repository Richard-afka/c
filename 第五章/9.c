#include<stdio.h>
double Temperature(double num){
    const double i=5.0/9.0;
    const double j=32.0;
    const double k=273.16;
    double she=i*(num-j);
    double kai=she+k;
    printf("%lf %lf\n",she,kai);
    return 0;
}
int main(){
   double hua;
   for(;;){
   printf("输入一个数：");
   //scanf("%lf",&hua);
   if(scanf("%lf",&hua)==1){
   Temperature(hua);
   }else{
    return 0;
   }
   }
}