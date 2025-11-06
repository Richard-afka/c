#include<stdio.h>
#include<string.h>
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int num[nums1Size+nums2Size];
    memcpy(num,nums1,nums1Size*sizeof(int));
    memcpy(num+nums1Size,nums2,nums2Size*sizeof(int));
    for(int i=0;i<nums1Size+nums2Size-1;i++){
        for(int j=0;j<nums1Size+nums2Size-1-i;j++){
            if(num[j]>num[j+1]){
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    double ave=0;
    if((nums1Size+nums2Size)%2==0){
        int n=(nums1Size+nums2Size)/2;
        ave=(num[n-1]+num[n])/2.0;
    }else{
        int n=(nums1Size+nums2Size)/2;
        ave=num[n];
    }
    return ave;
}
int main(){
    int arr1[]={1,2};
    int l1=2;
    int arr2[]={3,4};
    int l2=2;
    double ave=findMedianSortedArrays(arr1,l1,arr2,l2);
    printf("%lf\n",ave);
    return 0;
}