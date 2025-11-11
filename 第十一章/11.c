#include<stdio.h>
#include<string.h>
char* nat(char* ch){
    return ch;
}
char* sort(char* ch,int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            char* temp=malloc(1000*sizeof(char));
            if(ch[i]>ch[i+1]){
            temp=ch[i];
            ch[i]=ch[i+1];
            ch[i+1]=temp;
            }
        }
    }
    return ch;
}
