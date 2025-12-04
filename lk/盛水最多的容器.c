#include<stdio.h>
int maxArea(int* height, int heightSize) {
    // int max=0;
    // for(int i=0;i<heightSize-1;i++){
    //     for(int j=i+1;j<heightSize;j++){
    //         int min=height[i]<height[j]?height[i]:height[j];
    //         int s=min*(j-i);
    //         if(s>max){
    //             max=s;
    //         }
    //     }
    // }
    // return max;
    int i = 0, j = heightSize - 1;
    int nn = height[i] < height[j] ? height[i] : height[j];
    int max = nn * (j - i);
    // printf("%d\n",max);
    while (i < j) {
        int min = height[i] < height[j] ? height[i] : height[j];
        int s = min * (j - i);
        if (s > max) {
            max = s;
        }
        if (height[i] > height[j]) {
            j--;
        } else {
            i++;
        }
    }
    return max;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
    int max = maxArea(arr, n);
    printf("%d\n", max);
    return 0;
}
