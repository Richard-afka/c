#include<stdio.h>
int main(){
   int x=1;
   //int arr[20]={0};
   //arr[0]=1,arr[1]=1;
   int y=1;
   int count=1;
   int t=0;
   printf("%d %d ",x,y);
   while(count<=18){
     t=y;
     y+=x;
     x=t;
     count++;
     printf("%d ",y);
   }
}