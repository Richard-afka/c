#include<stdio.h>
#include<string.h>
#define n 5
struct name{
    char fname[20];
    char mname[20];
    char lname[20];
};
struct member{
    long int num;
    struct name a;
};
int prints(struct member *arr){
    for(int i=0;i<5;i++){
       // if(strlen(arr[i].a.mname) == 0 || arr[i].a.mname[0] == '-' || arr[i].a.mname[0] == ' ')
        if(arr[i].a.mname[0]=='-'||strlen(arr[i].a.mname) == 0){
            printf("%s, %s -- %ld\n",arr[i].a.fname,arr[i].a.lname,arr[i].num);
        }
        else{
            printf("%s, %s %c. -- %ld\n",arr[i].a.fname,arr[i].a.lname,arr[i].a.mname[0],arr[i].num);
        }
    }
    return 0;
}
int main(){
    struct member arr[5];
    for(int i=0;i<5;i++){
       scanf("%s%s%s",arr[i].a.fname,arr[i].a.mname,arr[i].a.lname);
        scanf("%ld",&arr[i].num);
    }
    prints(arr);
    return 0;
}
