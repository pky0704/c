/*
    getc함수 
    getc(stdin);
    getchar함수를 getc함수로 대체할 수 있다
    getchar함수는 getc함수를 이용해 만든 함수
    문자 하나의 입력 받는 함수
    표준입출력 , 파일입출력에 사용

    gets함수 : 문자열 입력 받는 함수
    get string
    한번에 여러문자를 입력 받을 수 있다. 엔터키를 입력할 때까지 입력한 모든 문자를 하나의 문자열로 간주
    gets함수의 매개변수에 char 배열로 선언된 변수(input_string)의 시작 주소를 넘겨주어야 한다.
    rewind함수를 사용해 입력 버퍼를 사용할 필요가 없다()
    ★엔터키값 미포함,null문자 0포함
    gets함수 정의 오류 발생시 gets함수 대신 fgets함수 사용
    fgets함수 : 파일에서 데이터를 읽어오는 함수 
        char int_string[10]
        fgets(input_string, 10, stdin)
    ★엔터키값, null문자0 포함


    gets함수로 문자열 입력받기
*/
#include <stdio.h>
void main()
{
    char input_string[10];  //문자열은 마지막에 null문자 0을 포함해야 하므로 최대 9개의 문자까지 저장 가능
    gets(input_string);//문자열을 입력받아 input_string에 저장함
    printf("input: %s\n", input_string);//입력받은 문자열 출력
}