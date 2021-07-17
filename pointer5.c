/* 
변수가 위치한 메모리 주소 출력
*/
#include <stdio.h>

void main()
{
    short birthday;
    short *ptr;//포인터 변수 선언
    ptr = &birthday;//birthday 변수의 주소를 ptr 변수에 대입 

    printf("birthday 변수의 주소는 %p입니다.\n", ptr);
}    