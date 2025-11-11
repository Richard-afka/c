#include<stdio.h>
static unsigned long int next=1;
int rand1(void){
    next=next*1103515245+12345;
    return (unsigned int)((next/65536)%32768)%10+1;
}
void srand1(unsigned int seed){
    next=seed;
}
int main(){
    int count;
    unsigned seed;
    int arr[100]={0};
    printf("输入种子：\n");
    while(scanf("%u",&seed)==1){
        srand1(seed);
        for(int i=0;i<100;i++){
            printf("%d\n",rand1());
        }
    }
    return 0;
}