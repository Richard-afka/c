#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *result=(int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
              result[0]=i;
              result[1]=j;
              *returnSize=2;
              return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
int main(){
    int arr[]={2,5,7,9};
    int size=5;
    int target=9;
    int returnSize=0;
    int* result=twoSum(arr,size,target,&returnSize);
    if(returnSize == 2) {
        printf("[%d,%d]\n", result[0], result[1]);
        free(result); 
    }// else {
       // printf("No solution found\n");
    //}
}