#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int count = 0;
    int* arr = (int*)calloc(numsSize + 1, sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];
        arr[num] = nums[i];
    }
    for (int i = 1; i <= numsSize; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    int* result = (int*)malloc(numsSize * sizeof(int));
    int k = 0;
    for (int i = 1; i <= numsSize; i++) {
        if (arr[i] == 0) {
            result[k++] = i;
        }
    }
    *returnSize = count;
    free(arr);
    return result;
}
int main(){
    int nums[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int n = 8;
    int count;
    int* arr = findDisappearedNumbers(nums, n, &count);
    for (int i = 0; i < count;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}