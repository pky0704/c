/*
    문자열 전용 입출력 함수 : gets, puts
    gets(char형 배열명), 엔터를 누르기 전까지 전체를 하나의 문자열로 배열에 저장 (빈칸, 탭문자 사용 가능)
    puts(): 문자열 상수나 char형 배열의 배열명을 주면 문자열을 화면에 출력 = printf 함수와 같다
*/
#include <stdio.h>

void main(void)
{
    char str[80];
    printf("문자열 입력: ");// puts 함수와 차이점 : printf -> 메세지 출력후 줄 바뀜 x 
    gets(str); 
    puts("입력된 문자열: ");//줄바꿈O
    puts(str);

    return 0;
}    