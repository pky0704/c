#include <stdio.h>

int i; //�������� i=0;
void print_i(void);

int main(){
    int i = 10; //��������
    ++i; //i=11;
    printf("i=%d\n", i); //i=11;
    print_i();//i=1;
    return 0;
}
void print_i(void){ //i=0;
    ++i; // i=1; ��������
    printf("i=%d\n", i);
}

