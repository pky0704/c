/*
sizeof 연산자를 사용한 배열
sizeof 연산자를 배열명에 사용하면 배열 전체의 크기를 바이트 단위로 계산
*/

#include <stdio.h>

int main(void){
    int score[5];
    int i;
    int total = 0;
    double avg;
    int count;

    count = sizeof(score) / sizeof(score[0]);//배열 요소의 개수 계산  
    for (i=0; i<count; i++){
        scanf("%d", &score[i]);
    }
    for (i=0; i<count; i++){
        total += score[i];
    }  
    avg = total / (double)count;

    for(i=0;i<count;i++){
        printf("%5d", score[i]);
    }

    printf("\n");
    
    printf("평균 : %.1lf\n", avg);

    return 0;
}