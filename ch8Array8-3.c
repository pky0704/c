/*
sizeof �����ڸ� ����� �迭
sizeof �����ڸ� �迭�� ����ϸ� �迭 ��ü�� ũ�⸦ ����Ʈ ������ ���
*/

#include <stdio.h>

int main(void){
    int score[5];
    int i;
    int total = 0;
    double avg;
    int count;

    count = sizeof(score) / sizeof(score[0]);//�迭 ����� ���� ���  
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
    
    printf("��� : %.1lf\n", avg);

    return 0;
}