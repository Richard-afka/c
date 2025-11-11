#include<stdio.h>
int main(){
    while(1){
        char x;
        if(scanf("%c",&x)==EOF){
            break;
        }
        char ch;
        while((ch=getchar())=='\n'){
            putchar(ch);
        }
        printf("%c %d\n",x,x);
    }
    return 0;
}