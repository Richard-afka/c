#include <stdio.h>
double ave(double m,double n){
    double ave=1/m+1/n;
    ave=1/ave;
    return ave;
}
int main(){
   double m,n;
   scanf("%lf %lf",&m,&n);
   double aver=ave(m,n);
   printf("%.2lf\n",aver);
   return 0;
}