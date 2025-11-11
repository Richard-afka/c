#include<stdio.h>
int p(int arr1[],int arr2[],int arr3[],int len){
    for(int i=0;i<len;i++){
        arr3[i]=arr1[i]+arr2[i];
    }
}
int main(){
    int arr1[]={12,4,5,8};
    int arr2[]={1,0,4,6};
    int len=sizeof(arr1)/sizeof(arr1[0]);
    int arr3[len];
    for(int i=0;i<len;i++){
        arr3[i]=0;
    }
    p(arr1,arr2,arr3,len);
    for(int i=0;i<len;i++){
        printf("%d ",arr3[i]);
    }
    printf("\n");
    return 0;
}