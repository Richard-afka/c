#include<stdio.h>
#include<string.h>
//#include<math.h>
int c(int n,int num){
    int result=1;
    for(int i=0;i<num;i++){
        result*=n;
    }
    printf("res=%d\n",result);
    return result;
    
}
int turn(char* arr){
    char* p=arr;
    int count=0;
    while(*p!='\0'){
        count++;
        p++;
    }
    //count=strlen(arr);
    p=arr;
    int num[count];
    for(int i=0;i<count;i++){
        num[i]=0;
    }
    int m=count-1;
     printf("m=%d\n",m);
    while(*p!='\0'){
        
        if(*p=='1'){
            num[m]=1;
        }
        m--;
        printf("m=%d\n",m);
        p++;
    }
    int sum=0;
    for(int i=0;i<count;i++){
        if(num[i]==1){
            sum+=c(2,i);
        }
    }
    return sum;
}
int main(){
    char *arr="01001001";
    int sum=turn(arr);
    printf("%d\n",sum);
    return 0;
}