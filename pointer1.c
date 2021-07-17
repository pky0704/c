#include <stdio.h>

int main(){
    int i = 10;
    char c = 'a';
    double f = 12.3;

    printf("i狼 林家 : %x\n", &i);
    printf("c狼 林家 : %x\n", &c);
    printf("f狼 林家 : %x\n", &f);

    return 0;
}