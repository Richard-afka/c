#include<stdio.h>
#include<string.h>
int main(){
    printf("请输入名字：\n");
    char name[50];
    scanf("%s",name);
    int le=strlen(name);
    le+=3;
    printf("\"%-20s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%*s\"\n",le,name);
    printf("\"%s\"\n",name);
   return 0;
}