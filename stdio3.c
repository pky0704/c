/*
    getchar 함수를 사용할 때 주의할 점
    getchar 함수를 사용하여 문자 한 개씩 두번 입력 받기
    두번째 입력 값이 엔터키의 값(아스키코드 10, \n)을 받게 되어 아무것도 출력하지 않고 줄 바꿈만 한 번 더 일어난다.
    해결방법1: getchar함수를 하나 더 써서 표준 입력 버퍼에 저장된 쓸모없는 엔터키 값이 출력되지 않도록 제거
    해결방법2: rewind함수를 사용해서 입력버퍼에 있는 나머지 입력값을 모두 지운다
    
*/
#include <stdio.h>
void main()
{
    int input_data;

    input_data = getchar(); //getchar()문자 하나를 입력받는 표준 입력 함수
    rewind(stdin);//입력버퍼에 있는 나머지 입력값을 모두 지운다
    printf("input1: %c\n", input_data);//int형 변수로 반환값을 받는게 일반적이지만 char형 변수로 받아도 된다

    input_data = getchar(); //getchar()문자 하나를 입력받는 표준 입력 함수
    rewind(stdin);//입력버퍼에 있는 나머지 입력값을 모두 지운다
    printf("input2: %c\n", input_data);//int형 변수로 반환값을 받는게 일반적이지만 char형 변수로 받아도 된다
}