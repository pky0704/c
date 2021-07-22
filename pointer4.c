#include<stdio.h>

int main(){
    int grade[5]={345,7,3,45,78};
    int sum = 0;
    int *p = NULL;
    p = grade;

    for (int i = 0; i<5;i++){
        sum+=*p++;   //345,7,3,45,78 의 합
    }

    printf("정수의합:%d\n", sum);

    return 0; 
}