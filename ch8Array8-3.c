/*
sizeof �����ڸ� ����� �迭
sizeof �����ڸ� �迭�� ����ϸ� �迭 ��ü�� ũ�⸦ ����Ʈ ������ ���
Q. 5���� ������ �Է��ϰ� ��հ� ��� 
*/
#include <stdio.h>
int main(void){
    int score[5];
    int i;
    int total = 0;
    double avg;
    int count;

    count = sizeof(score) / sizeof(score[0]);//count:�迭 ����� ���� ��� = siszeof(score):�迭 ��ü ũ�� / sizeof(score[0]):�迭 ��� �ϳ��� ũ��(4����Ʈ)

    for (i=0; i<count; i++){
        scanf("%d", &score[i]);// 5�� ���� �Է�
    }
    for (i=0; i<count; i++){
        total += score[i]; //total=�Է��� ���� 5���� ��
    }  
    avg = total / (double)count;
    for(i=0;i<count;i++){
        printf("%5d", score[i]);
    }
    printf("\n");
    printf("��� : %.1lf\n", avg);
    return 0;
}