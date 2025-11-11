#include<stdio.h>
int year(int num){
    if((num%4==0&&num%100!=0)||(num%400==0)){
        return 1;
    }
    return 0;
}
struct day{
    int year;
    int month;
    int day;
};
int main(){
    struct day b;
    scanf("%d %d %d",&b.year,&b.month,&b.day);
    int arr[]={31,28,31,30,31,30,31,31,30,30,30,31};
   // int m[]={"January","February","March","April","May","June",
     //   "July","August","September","October","November","December"};
    if(year(b.year)){
        arr[1]=29;
    }
    //int m=0;
    int sum=0;
    for(int i=0;i<b.month-1;i++){
        sum+=arr[i];  
    }
    sum+=b.day;
    printf("%d\n",sum);
    return 0;
}