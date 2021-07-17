/* 
포인터 변수의 주소 연산
*/
#include <stdio.h>

void main()
{
    short data = 0;
    short *p = &data;
     
    p = p + 1; // 포인터 변수에 저장된 주소 값을 1만큼 증가시킴

    printf("%p",p);
}    