/*
3���� �л��� ���Ͽ� �Ǽ�(float)������ ������ ���� �Է� �ް� 
������ �հ� ����� ���ϱ�
*/
#include <stdio.h>

int main()
{
    float score[3];
    float *fp,sum=0,avg;
    int i;
    fp=score;

    for(i=0;i<3;i++){
        printf("%d��° �л��� ���� :", i+1);
        scanf("%f",(fp+i));
        sum=sum+*(fp+i);
    }
    for(i=0;i<3;i++){
        printf("score[%d]=%f\n",i,score[i]);
    }
    printf("sum=%f, avg=%f\n", sum, sum/3);
    return 0;
}    