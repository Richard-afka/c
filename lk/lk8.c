#include<stdio.h>
#include<stdlib.h>
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = -1;
    result[1] = -1;
    if (numsSize == 0) {
        return result;
    }
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (left >= numsSize || nums[left] != target) {
        return result;
    }
    result[0] = left;
    right = numsSize - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    result[1] = right;
    return result;
}
int main(){
    int n = 5;
    int num[] = {1, 3, 4, 4, 5};
    int target = 4;
    int returnSize;
    int* result = searchRange(num, n, target, &returnSize);
    printf("目标值 %d 的起始和结束位置: [%d, %d]\n", target, result[0],
           result[1]);
    printf("返回数组大小: %d\n", returnSize);
    free(result);
    return 0;
}