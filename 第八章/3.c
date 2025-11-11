#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    //scanf("%c",&ch);
    int d=0;
    int xi=0;
    while((ch=getchar())!='\n'){
     if(isupper(ch)){
        d++;
     }else if(islower(ch)){
        xi++;
     }
    }
    printf("%d %d\n",d,xi);
    return 0;
}