#include<stdio.h>
int p(double* arr,int len){
    int m=0;
    for(int i=0;i<len;i++){
        if(arr[m]<arr[i]){
            m=i;
        }
    }
    return m;
}
int main(){
   double arr[8]={1,1,3,2,5,3,1};
   int len=sizeof(arr)/sizeof(double);
   int n=p(arr,len);
   printf("%d\n",n);
   return 0;
}