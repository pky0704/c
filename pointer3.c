#include<stdio.h>

int main(){
    int a[5]={10,20,30,40,50};
    // printf("a[0]�� �ּ�:%x\n", &a[0]);
    // printf("a[1]�� �ּ�:%x\n", &a[1]);
    // printf("a[2]�� �ּ�:%x\n", &a[2]);
    // printf("a[3]�� �ּ�:%x\n", &a[3]);
    // printf("a[4]�� �ּ�:%x\n", &a[4]);
    
    printf("a[0]�� �ּ�:%x\n", a);
    printf("a[1]�� �ּ�:%x\n", a+1);
    printf("*a�� �� %d\n", *a);
    printf("*(a+1) �� %d\n", *(a+1));

    return 0; 
}