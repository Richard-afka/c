#include<stdio.h>
int count(){
    static int count=0;
    count++;
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("被%d次调用\n",count());
    }
    return 0;
}