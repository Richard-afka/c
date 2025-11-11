#include<stdio.h>
int main(){
    printf("This program computes moduli\n");
    int x,y;
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&x);
    //printf("%d\n",x);
    printf("Now enterthe first operand:");
    scanf("%d",&y);
    //printf("%d\n",y);
    printf("%d %% %d is %d\n",y,x,(y%x));
    while(y>0){
        printf("Enter an integer to serve as the second operand(<=0 to quit):");
        scanf("%d",&y);
        if(y<=0){
            printf("Done\n");
            return 0;
        }
        else{
           // printf("%d\n",y);
            printf("%d %% %d is %d\n",y,x,(y%x));
        }
    }
    return 0;
}