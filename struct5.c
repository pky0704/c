/*
����ü �迭�� ���� ������� �Է� �ް� ���  
*/
#include <stdio.h>

struct student{
    int num;
    float kor;
    float eng;
    float math;
};

int main(){
    int i;
    struct student a[3];
    float sum[3] = {0};
    for(i=0; i<3; i++){
        printf("%d���� ����(����, ����, ����) �Է� : \n", i+1);
        scanf("%f", &a[i].kor);
        scanf("%f", &a[i].eng);
        scanf("%f", &a[i].math);
        sum[i] = sum[i] + a[i].kor + a[i].eng + a[i].math;
    }
    for(i=0;i<3;i++)
        printf("%d�� : %5.2f %5.2f %5.2f, sum=%5.2f\n", i+1, a[i].kor, a[i].eng, a[i].math, sum[i] );
    return 0; 
}