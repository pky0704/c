/* 
int형 변수에 저장된 값을 1바이트 단위로 출력하기
*/
#include <stdio.h>

void main()
{
    int data = 0x12345678, i;
    char *p = (char *)&data; //포인터 p가 char 형이라서 &data 도 char으로 형변환

    for(i=0; i<4; i++){//p의 주소값을 변경하지 않고 data변수 값을 1바이트씩 출력
        printf("%X,", *(p+i));
    }
}    