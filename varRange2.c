/*
static을 사용하여 case1과 case2를 각각 실행

static : 지역변수. 지역변수가 정적으로 변환됨
프로그램이 실행되는 동안 해당 변수의 값이 변화가 유지되는
정적할당으로의 변환이 가능 (생존기간 : 프로그램이 끝날때 까지(영구))
*/

#include <stdio.h>
int exampleStatic(int);

int main(){
    int i=0,j;
    for(j=1;j<=3;j++){
        printf("i=%d\n",exampleStatic(i));
    }
    return 0;
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
