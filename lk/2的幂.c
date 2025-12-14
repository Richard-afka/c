#include<stdio.h>
int isPowerOfTwo(int n) {
    int m = n;

    while (m > 4) {
        if (m % 2 == 1)
            return 0;
        m /= 2;
    }
    if (m == 4 || m == 2 || m == 1)
        return 1;
    return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    if(isPowerOfTwo(n)){
        printf("YES!\n");
    }else{
        printf("NO!\n");
    }
    return 0;
}