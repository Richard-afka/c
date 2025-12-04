#include<stdio.h>
int longestSubarray(int* nums, int numsSize, int limit) {
    if (numsSize == 0) return 0;
    
    int *p1 = nums;      // 窗口左边界
    int *p2 = nums;      // 窗口右边界
    int max = 1;
    
    // 维护当前窗口的最小值和最大值
    int current_min = *nums;
    int current_max = *nums;
    
    while (p2 < nums + numsSize) {
        // 更新当前窗口的最大最小值
        if (*p2 < current_min) current_min = *p2;
        if (*p2 > current_max) current_max = *p2;
        
        // 检查窗口是否满足条件
        if (current_max - current_min <= limit) {
            // 满足条件，更新最大长度
            int length = p2 - p1 + 1;
            if (length > max) {
                max = length;
            }
        } else {
            // 不满足条件，移动左边界
            p1++;
            // 重新计算新窗口的最大最小值
            current_min = current_max = *p1;
            int *temp = p1;
            while (temp <= p2) {
                if (*temp < current_min) current_min = *temp;
                if (*temp > current_max) current_max = *temp;
                temp++;
            }
        }
        
        p2++;
    }
    
    return max;
}