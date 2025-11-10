#include<stdio.h>
#define CSIZE 4
struct name{
    char fname[20];
    char lname[20];
};
struct student{
    struct name a;
    double grade[3];
    double aver;
};
void prints(struct student *student,int len){
    for(int i=0;i<len;i++){
        printf("学生姓名：\n%s %s\n",student[i].a.fname,student[i].a.lname);
        printf("分数：\n");
        for(int j=0;j<3;j++){
            printf("%lf ",student[i].grade[j]);
        }
        printf("\n");
        printf("平均分：\n%lf\n",student[i].aver);
    }
}
int main(){
    struct student student[CSIZE];
    for(int i=0;i<CSIZE;i++){
        printf("请输入学生姓名：\n");
        scanf("%s %s",student[i].a.fname,student[i].a.lname);
        printf("请输入分数：\n");
        for(int j=0;j<3;j++){
            scanf("%lf",&student[i].grade[j]);
        }
        }
    double ave=0;
    double sum=0;
    for(int i=0;i<CSIZE;i++){
        double count=0;
        for(int j=0;j<3;j++){
            count+=student[i].grade[j];
        }
        sum+=count;
        student[i].aver=count/3.0;
        printf("第%d名学生平均分为:\n%lf\n",i+1,student[i].aver);
    }
    prints(student,CSIZE);
    ave=sum/12.0;
    printf("班级平均分：\n%lf",ave);
    return 0;
}