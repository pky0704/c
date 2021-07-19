/*
    scanf = scan format
    만능 표준 입력 함수 
    문자,문자열,정수, 실수 모두 입력 받을 수 있다 
    입력 받을 데이터의 종류, 자릿수, 입력 형식을 지정할 수 있다.
    %d 정수(int), %hd 정수(short int), %f(float), %lf(double), %c 문자, %s 문자열    
    
    scanf("%d", &data); => scanf("입력형식 지정 키워드", 입력 받을 값을 저장할 변수의 주소);

    scanf 는 포인터 기술을 사용하여 값을 반환한다.
 
*/
#include<stdio.h>
//scanf 함수를 사용하여 정수와 실수 값 입력 받기
void main()
{
    int int_data;
    float float_data;

    scanf("%d", &int_data); //정수값 입력 받기
    scanf("%f", &float_data);//실수값 입력 받기

    printf("input : %d, %f \n", int_data, float_data);
}