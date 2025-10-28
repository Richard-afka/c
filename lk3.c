 #include<stdio.h>
 int main(){
   int n=0;
    if(x<0){
      if(x==-2147483648){
        return 0;
      }
       n=-x;
    }else{
       n=x;
    }
    int m=0;
    long long h=0;
    while(n>0){
     m=n%10;
     n/=10;
     h=h*10+m;
    }
  if(h>2147483647){
    return 0;
  }
  if(x<0){
    printf("%d\n",-h);
  }else{
    printf("%d\n",h);
  }
}
