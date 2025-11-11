#include<stdio.h>
int x(int arr[],int l){
    for(int i=0;i<l;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int two(int arr[],int l){
    for(int i=0;i<l;i++){
        printf("%d ",2*arr[i]);
    }
    printf("\n");
}
int main(){
    int arr1[]={12,4,5,8};
    int len=sizeof(arr1)/sizeof(arr1[0]);
    x(arr1,len);
    two(arr1,len);
    return 0;
}