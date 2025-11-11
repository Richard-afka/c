#include<stdio.h>
int main(){
    char ch;
    int count =0;
    while(1){
     ch=getchar();
     if(ch=='#'){
        break;
     }
     printf("%c-%d ",ch,ch);
     count++;
     if(count%8==0){
        printf("\n");
     }
    }
       printf("\n");
    return 0;
}