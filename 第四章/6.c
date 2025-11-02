#include<stdio.h>
#include<string.h>
    int main(){
    char x[30];
    char m[30];
       printf("请输入姓：\n");
       scanf("%s",x);
       printf("请输入名：\n");
       scanf("%s",m);
      int l1=strlen (x);
      int l2=strlen (m);
      printf("%s %s\n",x,m);
      printf("%-*d %-*d\n",l1,l1,l2,l2);
      printf("%s %s\n",x,m);
      printf("%*d %*d\n",l1,l1,l2,l2);
      return 0;
    }
