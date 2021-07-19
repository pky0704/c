/*
    공백 문자로 구분해서 scanf함수로 8,10,16진수 입력 받기
    8진법 %o, 10진법 %d, 16진법 %x
    scanf 함수는 입력 형식 키워드와 자료형이 일치해야 한다
*/
#include<stdio.h>
void main()
{
    int num1, num2, num3;
    scanf("%o %d %x", &num1, &num2, &num3);// 8, 10, 16진수 값 입력 받기 
    printf("input : %d, %d, %d \n", num1, num2, num3);//입력 받은 숫자 값을 10진수로 출력
}