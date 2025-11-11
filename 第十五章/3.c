#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int count = 0;
    while (num) {
        if (num&1) { 
            count++;
        }
        num >>= 1;  
    }   
    printf("%d",count);
    return 0;
    
}