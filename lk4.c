#include<stdio.h>
int isPalindrome(int x) {
    int count=0;
    int a=x;
    long long h=0;
    if(x<0){
        return 0;
    }
    while(a>0){
        int m=a%10;
        a/=10;
        h=h*10+m;
    }
    if(h==x){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int x;
    scanf("%d",&x);
    if(isPalindrome(x)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}