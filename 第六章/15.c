#include<stdio.h>
int main(){
    char arr[255]={0};
    int count=0;
    for(int i=0;;i++){
    scanf("%c",&arr[i]);
    if(arr[i]=='\n'){
        break;
    }
    count++;
 }
 for(int i=count-1;i>=0;i--){
    printf("%c",arr[i]);
 }
 printf("\n");
    return 0;
}