#include <stdio.h>
#include <stdlib.h> //malloc, free 함수 사용을 위한 헤더 파일

int main(void){
    int *pi; //동적 할당 영역을 연결할 포인터 선언
    double *pd;

    pi = (int *)malloc(sizeof(int));
    if(pi==NULL){
        printf("# 메모리가 부족합니다.\n");
        exit(1);
    }
    pd = (double *)malloc(sizeof(double));

    *pi = 10;
    *pd = 3.4;

    printf("정수형으로 사용 : %d\n", *pi);
    printf("실수형으로 사용 : %.1f\n", *pd);

    free(pi);
    free(pd);

    return 0;

}
