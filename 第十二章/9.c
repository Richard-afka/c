#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int count;
    char temp[100];
    char **words;
    printf("How many words do you wish to enter? ");
    scanf("%d",&count);
   // while(getchar()=='\n');
    printf("Enter %d worlds now: \n",count);
    words=(char **)malloc(count*sizeof(char*));
    if(words==NULL){
        printf("内存分配失败\n");
        return 1;
    }
    for(int i=0;i<count;i++){
        scanf("%s",temp);
        words[i]=(char*)malloc(strlen(temp)+1);
        if(words[i]==NULL){
        printf("内存分配失败\n");
        return 1;
    }
    strcpy(words[i],temp);
    }
    printf("Here are you words: \n");
    for(int i=0;i<count;i++){
        printf("%s\n",words[i]);
    }
    for(int i=0;i<count;i++){
        free(words[i]);
    }
    free(words);
    return 0;
}