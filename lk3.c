 #include<stdio.h>
 int main(){
   int x;
   scanf("%d",&x);
   int n=0;
    if(x<0){
       n=-x;
    }else{
       n=x;
    }
    int m=0;
    int h=0;
    while(n>0){
     m=n%10;
     n/=10;
     h=h*10+m;
    }
  if(x<0){
    printf("%d\n",-h);
  }else{
    printf("%d\n",h);
  }
}