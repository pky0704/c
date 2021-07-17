#include<stdio.h>

int main(){
    int a[5]={10,20,30,40,50};
    // printf("a[0]狼 林家:%x\n", &a[0]);
    // printf("a[1]狼 林家:%x\n", &a[1]);
    // printf("a[2]狼 林家:%x\n", &a[2]);
    // printf("a[3]狼 林家:%x\n", &a[3]);
    // printf("a[4]狼 林家:%x\n", &a[4]);
    
    printf("a[0]狼 林家:%x\n", a);
    printf("a[1]狼 林家:%x\n", a+1);
    printf("*a狼 蔼 %d\n", *a);
    printf("*(a+1) 蔼 %d\n", *(a+1));

    return 0; 
}