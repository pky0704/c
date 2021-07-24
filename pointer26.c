/*
3명의 학생에 대하여 실수(float)형태의 점수를 각각 입력 받고 
점수의 합과 평균을 구하기
*/
#include <stdio.h>

int main()
{
    float score[3];
    float *fp,sum=0,avg;
    int i;
    fp=score;

    for(i=0;i<3;i++){
        printf("%d번째 학생의 성적 :", i+1);
        scanf("%f",(fp+i));
        sum=sum+*(fp+i);
    }
    for(i=0;i<3;i++){
        printf("score[%d]=%f\n",i,score[i]);
    }
    printf("sum=%f, avg=%f\n", sum, sum/3);
    return 0;
}    