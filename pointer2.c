#include<stdio.h>

int main(){
    int i = 3000;
    int *p = &i;

    printf("i의 주소 %x\n", &i);
    printf("포인터 p의 값 %x\n", p);

    printf("i의 : %d\n", i);
    printf("*p의 값 : %d\n", *p);

    return 0; 
}