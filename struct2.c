/*
구조체 멤버
*/
#include <stdio.h>

struct student{
    int num;
    char dept[20];
    char name[20];
    int grade;
};

int main(){
    //printf("학번,학과,이름,학년을 차례대로 입력해주세요\n");
    struct student a1;
    scanf("%d", &a1.num);
    scanf("%s", &a1.dept);
    scanf("%s", &a1.name);
    scanf("%d", &a1.grade);
    printf("num=%d\n dept=%s\n name=%s\n grade=%d\n",a1.num,a1.dept,a1.name,a1.grade);
    return 0;
}