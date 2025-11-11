#include<stdio.h>
#include<ctype.h>
int left(char* arr,int len){
    int ch;
    int i;
    while((ch=getchar())!=EOF&&isspace(ch)){
        continue;
    }if(ch==EOF){
        return EOF;
    }
    if(i<len-1){
        arr[i++]=ch;
    }
    while((ch=getchar())!=EOF&&isspace(ch)){
        if(i<len-1){
        arr[i++]=ch;
    }
    }
    arr[i]='\0';
    if(ch!='\n'&&ch!=EOF){
       while((ch=getchar())!=EOF&&isspace(ch)){
        continue;
    } 
    }
    return i;
}
int main(){
    char arr[]=" okok pkok  mmmok";
    int n;
    scanf("%d",&n);
    int count=0;
    count=left(arr,n);
    if(count!=EOF){
        printf("%s %d\n",arr,count);
    }else{
        printf("0\n");
    }
    return 0;
}