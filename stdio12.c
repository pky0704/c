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
//scanf 함수를 사용하여 문자열 입력 받기
void main()
{
    char temp[32];
    scanf("%s", temp); //중간에 공백을 포함시켜 입력하면 첫 번재 공백까지를 한개의 문자열로 생각하기 때문에  첫번째 공백까지 저장됨=>scanf -> gets 사용
    printf("문자를 입력하세요 : %s\n", temp);//배열 변수의 이름을 사용하면 이름 자체가 해당 배열의 시작 주소를 의미하기 때문에 &연산자 쓰지 않음
}