/* 
    포인터 변수의 연산
*/
#include <stdio.h>

int main()
{
    int i=10;
    int *ptr=&i;

    printf("&i=%d\ti=%d\n",&i,i);
    printf("ptr=%d\t*ptr=%d\n",ptr,*ptr);

    printf("case 1 ptr++\n");

    ptr++;//4byte 씩 증가
    printf("&i=%d\ti=%d\n",&i,i);
    printf("ptr=%d\t*ptr=%d\n",ptr,*ptr);//*ptr 값이 정의 되어있지 않아 쓰레기값 출력됨
    
}    