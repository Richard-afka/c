#include<stdio.h>
int main(){
    int week=1;
    int num=5;
    for(week=1;;week++){
        num-=week;
        num*=2;
        printf("%d\n",num);
        if(num>=150){
            break;
        }
    }
    return 0;
}