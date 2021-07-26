/*
typedef : 새로운 이름으로 명명함

scanf 사용시 에러발생
에러발생이유 : 시스템 안정성과 보안을 확보하기 위함
해결방법 
1. scanf_s
2. #define_CRT_SECURE_NO_WARNINGS
3.프로젝트 > 속성 
    구성속성 > c/c++ > 전처리기 > ;뒤에 _CRT_SECURE_NO_WARNINGS; 추가함 
4.#pragma warning(disable:4996)

typedef struct struct6
{
    int num;
    float kor;
}St;
//=> struct struct6 St
//=> struct6 St
 
//or

typedef struct
{
    int num;
    float kor;
}St;
//=> struct St

*/
#include <stdio.h>

struct a{
    int num;
    double total;
};

int main(){
    struct a *pTest;
    struct a p={1,100.99};
    pTest=&p;
    
    printf("num=%d total=%lf\n", p.num, p.total);
    printf("num=%d total=%lf\n", (*pTest).num, (*pTest).total);
    
    return 0; 
}