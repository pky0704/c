#include<stdio.h>
int main(){
    const int students = 5;
    int grade[5] = {0};
    int sum = 0;
    int average = 0;
    int i=0;
    printf("�л����� ������ �Է��ϼ��� : \n");
    for(;i<students;i++){
        scanf("%d", &grade[i]);
        sum+=grade[i];

    }
    average = sum / students;

    printf("���� ���: %d \n", average);
    printf("���� ��� : %d \n", sum/students);

    return 0 ;
}
