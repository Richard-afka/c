#include<stdio.h>
#include<string.h>
#include <stdlib.h>
char* diff(char* arr,int len){
     char* result=malloc(len+1);
    // char ch; 
    // int i=0;
    // while((ch=getchar())!=EOF&&ch!='\n'){
    //     result[i]=arr[len-i-1];
    //     i++;
    // }
      for(int i = 0; i < len; i++) {
         result[i] = arr[len - 1 - i];
    }
    result [len]='\0';
    return result;
} 
int main(){
    char* arr[3]={"hello","world","hahahha"};
    for(int i=0;i<3;i++){
        char* result=diff(arr[i],strlen(arr[i]));
        printf("%s\n",result);
        free(result);
    }
    return 0;
}
