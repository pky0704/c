/* 
int형 변수에 저장된 값을 1바이트 단위로 출력하기
*/
#include <stdio.h>

void main()
{
    int data = 0x12345678, i;
    char *p = (char *)&data; //포인터 p가 char 형이라서 &data 도 char으로 형변환

    for(i =0; i<4; i++){ //4바이트 데이터를 바이트 단위로 값을 출력하기 위해 4번 반복함
        printf("%X,", *p); // p는 char * 형이라서 시작 주소부트 1바이트 크기만 사용함 
        p++;
    }
}    