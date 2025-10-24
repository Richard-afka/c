#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct result{
    int *arr;
    int len;
};
void your_concat(int arr1[],int len1,int arr2[],int len2,struct result *res){
    res->len=len1+len2;
    res->arr=(int*)malloc(res->len*sizeof(int));
    if(res->arr==NULL){
        fprintf(stderr,"Memory allocation failed\n");
        exit(1);
    }
    memcpy(res->arr,arr1,len1*sizeof(int));
    memcpy(res->arr+len1,arr2,len2*sizeof(int));
}
void your_sort(struct result *res){
   for(int i=0;i<res->len-1;i++){
    for(int j=0;j<res->len-1-i;j++){
        if(res->arr[j]>res->arr[j+1]){
        int temp=res->arr[j];
        res->arr[j]=res->arr[j+1];
        res->arr[j+1]=temp;
    }
    }
   }
}
void your_dedup(struct result *res){
    if(res->len==0){
        return;
    }
    int *temp=(int *)malloc(res->len*sizeof(int));
    if(temp==NULL){
        fprintf(stderr,"Memory allocation failed\n");
        exit(1);
    }
    int new_len=1;
    temp[0]=res->arr[0];
    for(int i=1;i<res->len;i++){
        if(res->arr[i]!=res->arr[i-1]){
            temp[new_len++]=res->arr[i];
        }
    }
    free(res->arr);
    res->arr=(int*)malloc(new_len*sizeof(int));
    memcpy(res->arr,temp,new_len*sizeof(int));
    res->len=new_len;
    free(temp);
}
void print_result(struct result res){
   for(int i=0;i<res.len;i++){
    printf("%d ",res.arr[i]);
   }
   printf("\n");
}
int main() {
    int arr1[] = { 6, 1, 2, 1, 9, 1, 3, 2, 6, 2 };
    int arr2[] = { 4, 2, 2, 1, 6, 2 };
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    struct result result;
    your_concat(arr1, len1, arr2, len2,&result);
    print_result(result);
    your_sort(&result);
    print_result(result);
    your_dedup(&result);
    print_result(result);
    free(result.arr);
    return 0;
}