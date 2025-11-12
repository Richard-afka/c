#include<stdio.h>
int maxDiff(int num) {
        int c=num;
        int count=0;
        int arr[9]={0};
        int arr1[9]={0};
        int arr2[9]={0};
      //  int arr3[9]={0};
        int a=0;
        int b=0;
        int n=0;
        while(c!=0){
            arr[count++]=c%10;
            c/=10;
        }
        for(int i=count-1;i>=0;i--){
            if(arr[i]!=9){
               n=arr[i];
               break;
            }
        }
        for(int i=0;i<count;i++){
            arr1[i]=arr[i];
            if(arr[i]==n){
               arr1[i]=9;
            }
        }
        if(arr[count-1]!=1){
        n=arr[count-1];
        for(int i=0;i<count;i++){
            arr2[i]=arr[i];
            if(arr[i]==n){
                arr2[i]=1;
            }
        }
        }else{
            for(int i=count-1;i>=0;i--){
                n=0;
                if (arr[i]!=1&&arr[i]!=0){
                    n=arr[i];
                    break;
                }
            }
            for(int i=0;i<count;i++){
                arr2[i]=arr[i];
            if(arr[i]==n){
                arr2[i]=0;
            }
            }
        }
        for(int i=count-1;i>=0;i--){
          a=a*10+arr1[i];
          b=b*10+arr2[i];
        }
        int d=a-b;
        return d;
    }
    int main(){
        int num;
        scanf("%d",&num);
        int n=maxDiff(num);
        printf("%d\n",n);
        return 0;
    }