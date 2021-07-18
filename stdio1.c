/*
    getchar 함수를 사용하여 키보드에서 문자 한개 입력 받기
*/
#include <stdio.h>
void main()
{
    int input_data;
    input_data = getchar(); //getchar()문자 하나를 입력받는 표준 입력 함수
    printf("input: %c\n", input_data);//int형 변수로 반환값을 받는게 일반적이지만 char형 변수로 받아도 된다
}