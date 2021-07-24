/*
전역변수
*/

#include <stdio.h>
int i;//전역변수 선언. 값지정 X => 초기화 0
void printWhat();
int main(){
    printf("i(1)=%d\n",i);// 0
    int i=10;
    printf("i(2)=%d\n",i);//10
    printWhat();// 0
    return 0;
}
void printWhat(){
    printf("i(3)=%d\n",i);
}
//case1 - 변수의 저장 유형 static 사용(지역 -> 전역)
// int exampleStatic(int i){
//     static int si=1;
//     si++;
//     printf("si=%d\n",si);
//     return i+si;
// }
//case2 - 지역 변수
int exampleStatic(int i){
    int si=1;
    si++;
    printf("si=%d\n",si);
    return i+si;
}
