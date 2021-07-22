//1.strlen함수를 사용하여 문자열 길이 출력하기
//2.두개의 문자열 합치기 (strcat 함수)

#include <stdio.h>
#include <string.h>//문자열 관련 함수 원형을 모아놓은 헤더 파일

void main()
{
    int data_length; // 문자열 길이 저장할 변수
    char data1[10] = {'h','a','p','p','y',0};
    data_length = strlen(data1);//문자열 길이를 구하는 내장함수 strlen
    printf("문자길이 data length=%d\n", data_length);

    char data2[10] = {'a','b','c',0};
    char result[16];
    strcpy(result, data2);// data2에 저장된 문자열을 result로 복사. strcpy(저장될 배열명, 저장할 배열명)
    strcat(result, "def");// result값 맨 뒤에 "def"를 덧붙임

    printf("%s+\"def\" = %s\n", data2, result);
}    