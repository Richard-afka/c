#include<stdio.h>
#include<stdbool.h>
int main(){
    char x;
    int num;
    float money=0;
    int num_a=0,num_b=0,num_c=0,total_num=0;
    float coat_a=0,coat_b=0,coat_c=0,total_scoat=0,total_coat=0;
    float yb=0;
    bool cut=0;
    while(1){
    scanf("%c %d",&x,&num);
    if(x=='q')break;
    switch(x){
        case 'a':
          money=2.05;
          num_a+=num;
          coat_a+=num_a*money;
          break;
        case 'b':
          money=1.15;
          num_b+=num;
          coat_b+=num_b*money;
          break;
        case 'c':
          money=1.09;
          num_c+=num;
          coat_c+=num_c*money;
          break;
    }
  }
    total_scoat=coat_a+coat_b+coat_c;
    total_num=num_a+num_b+num_c;
    if(total_num<=5){
        yb=6.5;
    }else if(yb<=20){
        yb=14;
    }else{
        yb=14+0.5*(total_num-20);
    }
    total_coat=coat_a+coat_b+coat_c+yb;
    if(total_scoat>=100){
        total_coat*=0.95;
        cut=1;
    }
    if(num_a){
        printf("洋蓟：%d\n",num_a);
    }
    if(num_b){
        printf("甜菜：%d\n",num_b);
    }
    if(num_c){
        printf("胡萝卜：%d\n",num_c);
    }
    printf("蔬菜费：%.2f 总费用：%.2f 运费和包装费：%.2f\n",total_scoat,total_coat,yb);
    if(cut){
        printf("折扣：%%5打折优惠\n");
    }
    return 0;
}

