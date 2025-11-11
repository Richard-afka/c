#include<stdio.h>
int prime(int num){
    if(num<=1){
        return 0;
    }
    if(num==2){
        return 1;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
   int n;
   scanf("%d",&n);
   for(int i=0;i<=n;i++){
    if(prime(i)){
        printf("%d ",i);
    }
   }
   printf("\n");
   return 0;
}