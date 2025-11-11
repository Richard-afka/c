#include<stdio.h>
int main(){
    printf("清输入一个大写字母：");
    char x;
    scanf("%c",&x);
    int l=x-'A'+1;
    for(int i=1;i<=l;i++){
        for(int j=l-i;j>0;j--){
           printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%c",'A'+j-1);
        }
        for(int j=1;j<i;j++){
            printf("%c",'A'+i-j-1);
        }
        printf("\n");
    }
    return 0;
}
// #include<stdio.h>
// int main(){
//     printf("清输入一个大写字母：");
//     char x;
//     scanf("%c",&x);
//     int l=x-'A'+1;
//     for(int i=1;i<=l;i++){
//         for(int j=l-i;j>0;j--){
//            printf(" ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("%c",'A'+j-1);
//         }
//         for(int j=1;j<=i-1;j++){
//             printf("%c",'A'+i-1-j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
