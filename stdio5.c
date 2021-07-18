/*
    gets함수로 문자열을 입력 받을 때 입력 취소까지 처리하기
    ctrl+c :입력 취소 처리
*/
#include <stdio.h>
void main()
{
    char input_string[10];  
    if(NULL != gets(input_string)){
        printf("input : %s\n", input_string);
    }else{
        printf("input => Canceled\n"); //ctrl+c :입력 취소 처리(gets함수 종료) , 사용자 입력이 정상적으로 완료되지않아 반환값이 null일때 출력할 문구 
    }
}뮤