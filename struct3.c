/*
����ü ��� 
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
    printf("1�� �л��� ����(����,����,����) �Է� :\n");
    scanf("%f", &a1.kor);
    scanf("%f", &a1.eng);
    scanf("%f", &a1.math);

    printf("2�� �л��� ����(����,����,����) �Է� :\n");
    scanf("%f", &a2.kor);
    scanf("%f", &a2.eng);
    scanf("%f", &a2.math);

    printf("3�� �л��� ����(����,����,����) �Է� :\n");
    scanf("%f", &a3.kor);
    scanf("%f", &a3.eng);
    scanf("%f", &a3.math);

    printf("===================\n");
    printf("1�� �л� ������ �� : %f\n",(a1.kor+a1.eng+a1.math));
    printf("2�� �л� ������ �� : %f\n",(a2.kor+a2.eng+a2.math));
    printf("3�� �л� ������ �� : %f\n",(a3.kor+a3.eng+a3.math));
    
    return 0;
}

