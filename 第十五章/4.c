#include <stdio.h>
#include <limits.h> 
int check_bit(int num, int position) {
    // if (position < 0 || position >= sizeof(int) * CHAR_BIT) {
    //     return 0; 
    // }
    return (num>> position) & 1;
}
int main() {
    int num, n;
    num = 200; 
    n= 2;
    printf("%d 的第 %d 位是: %d\n", num, n, 
           check_bit(num, n));
    return 0;
}