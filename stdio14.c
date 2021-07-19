/*
    scanf 함수는 입력형식 키워드와 자료형이 일치해야 한다
    printf 함수는 변수의 값을 전달 받아 사용자가 지정한 형식으로 맞게 출력하는 방식으로 구성된 함수
    정수를 받는 %d키워드를 사용하면 변수의 자료형과 상관없이 10진수로 변수의 값을 출력
    scanf 함수는 &연산자를 사용하여 변수의 주소를 전달 받는 방식이기 때문에 %d키워드를 사용하면 반드시 정수자료형인 int형 변수 사용해야한다.
    => scanf함수는 포인터를 사용하기 때문에 형식을 지정하는 키워드와 변수의 자료형이 맞지 않으면 프로그램에 오류가 발생

    char, unsigned char => %c
    int, unsigned int => %o %d %x
    float => %f
    double => %lf
    char *, char [] => #s
    short => %hd
*/
#include<stdio.h>
void main()
{
    char data1 = 5;
    short data2 = 6;
    int data3 = 7;
    float data4 = 8.0f;
    printf("%d %d %d %f\n", data1, data2, data3, data4); //화면상 정삭적으로 5,6,7 출력 
    //scanf 입력 키워드와 자료형이 다르므로 오류 발생
    scanf("%c %d %d %f", &data1, &data2, &data3, &data4); //5, 6, 7 입력 = > 
    printf("%c %d %d %f\n", data1, data2, data3, data4); //출력시 5, 6, 7 안나옴

    //정상 입출력 
    //scanf("%c %d %d %f", &data1, &data2, &data3, &data4); //5, 6, 7 입력 = > 입력 키워드와 자료형이 다르므로 오류 발생
    //printf("%d %d %d %f\n", data1, data2, data3, data4); //출력시 5, 6, 7 안나옴

}
