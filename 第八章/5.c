#include<stdio.h>
int main(){
    int guess;
    scanf("%d",&guess);
    printf("Is your number %d?\n",guess);
    int ch;
    while((ch=getchar())!='y'){
        if(ch=='\n')continue;
        if(ch=='b'){
            guess=guess/2;
            printf("Is your number %d?\n",guess);
        }else if(ch=='s'){
            guess=(guess+100)/2;
            printf("Is your number %d?\n",guess);
        }else{
            printf("Please enter y/b/s\n");
            continue;
        }
        //printf("Is your number %d?\n",guess);
        while((getchar()!='\n'));
    }
    printf("I got it!Your number is %d!\n",guess);
    return 0;
}
