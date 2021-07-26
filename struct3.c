/*
구조체 멤버 
*/
#include <stdio.h>

struct student{
    int num;
    float kor;
    float eng;
    float math;
};

int main(){
    struct student a1,a2,a3;
    printf("1번 학생의 성적(국어,영어,수학) 입력 :\n");
    scanf("%f", &a1.kor);
    scanf("%f", &a1.eng);
    scanf("%f", &a1.math);

    printf("2번 학생의 성적(국어,영어,수학) 입력 :\n");
    scanf("%f", &a2.kor);
    scanf("%f", &a2.eng);
    scanf("%f", &a2.math);

    printf("3번 학생의 성적(국어,영어,수학) 입력 :\n");
    scanf("%f", &a3.kor);
    scanf("%f", &a3.eng);
    scanf("%f", &a3.math);

    printf("===================\n");
    printf("1번 학생 성적의 합 : %f\n",(a1.kor+a1.eng+a1.math));
    printf("2번 학생 성적의 합 : %f\n",(a2.kor+a2.eng+a2.math));
    printf("3번 학생 성적의 합 : %f\n",(a3.kor+a3.eng+a3.math));
    
    return 0;
}

