//배열과 반복문을 사용한 성적 처리 프로그램 
#include <stdio.h>

int main(void)
{
    int score[5];
    int i;
    int total = 0;
    double avg;

    for(i=0; i<5;i++){
        scanf("%d", &score[i]); //각 배열 요소 성적 입력
    }

    for(i=0; i<5 ; i++){
        total += score[i]; // 성적을 누적하여 총점 계산
    }

    avg = total / 5.0;

    for(i=0; i<5; i++){
        printf("%5d", score[i]); //%5d 오른쪽 정렬 : 5개의 칸을 만들어 놓고 오른쪽으로 정렬하여 출력 _ _ _ _ _정수 
    }

    printf("\n");
    
    printf("평균:%.1lf\n", avg); //%.1lf 소수자리 1까지 출력
    //3.1f =>정수 자리의 3은 오른쪽 정렬을 위한 숫자입니다. 또한 ‘소수 자리의 1은 소수 둘째 자리에서 반올림 하여 첫째 자리 까지만 출력하라.’

    return 0;

}