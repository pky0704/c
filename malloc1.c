#include <stdio.h>
#include <stdlib.h> //malloc, free �Լ� ����� ���� ��� ����

int main(void){
    int *pi; //���� �Ҵ� ������ ������ ������ ����
    double *pd;

    pi = (int *)malloc(sizeof(int));
    if(pi==NULL){
        printf("# �޸𸮰� �����մϴ�.\n");
        exit(1);
    }
    pd = (double *)malloc(sizeof(double));

    *pi = 10;
    *pd = 3.4;

    printf("���������� ��� : %d\n", *pi);
    printf("�Ǽ������� ��� : %.1f\n", *pd);

    free(pi);
    free(pd);

    return 0;

}
