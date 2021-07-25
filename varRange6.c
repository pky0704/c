#include <stdio.h>

int i; //전역변수 i=0;
void print_i(void);

int main(){
    int i = 10; //지역변수
    ++i; //i=11;
    printf("i=%d\n", i); //i=11;
    print_i();//i=1;
    return 0;
}
void print_i(void){ //i=0;
    ++i; // i=1; 전역변수
    printf("i=%d\n", i);
}

