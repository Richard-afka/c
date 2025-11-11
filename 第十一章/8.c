#include<stdio.h>
char* string_in(char* arr,char* ch){
    char* p1=arr;
    char* p2=ch;
    char* p10=p1;
    char* p20=p2;
    while(*p1!='\0'){
    while(*p1==*p2&&*p2!='\0'&&*p2!='\0'){
        p1++;
        p2++;
        if(*(p2+1)=='\0'){
            return p10;
        }
      }
      
        p10++;
        p1=p10;
        p2=p20;
    }
       return NULL;     
}
int main(){
    char str1[100],str2[100];
    char choice;
    do{
        fgets(str1,sizeof(str1),stdin);
       // getchar();
        fgets(str2,sizeof(str2),stdin);
        //getchar();
        char* result=string_in(str1,str2);
        if(result!=NULL){
            printf("%p\n",result);
            printf("%s",result);
        }else{
            printf("无结果\n");
        }
        printf("是否继续（y&n）：\n");
        scanf("%c",&choice);
        getchar();
    }while(choice=='y');
    printf("再见！\n");
    return 0;
}