#include<stdio.h>
int main(){
    const int students = 5;
    int grade[5] = {0};
    int sum = 0;
    int average = 0;
    int i=0;
    printf("학생들의 성적을 입력하세요 : \n");
    for(;i<students;i++){
        scanf("%d", &grade[i]);
        sum+=grade[i];

    }
    average = sum / students;

    printf("성적 평균: %d \n", average);
    printf("성적 평균 : %d \n", sum/students);

    return 0 ;
}
