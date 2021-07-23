/* 
    포인터 변수의 연산
*/
#include <stdio.h>

int main()
{
    int i=10;
    int *ptr;
    ptr=&i;//ptr이 i의 주소를 가르킨다

    printf("&i=%d\ti=%d\n",&i,i);
    printf("ptr=%d\t*ptr=%d\n",ptr,*ptr);

    printf("case 3 *(++ptr)\n");
    (*ptr)++; //i=11
    *(++ptr);//ptr이 저장한 주소가 가르키는 값을 증가한 후, ptr의 주소를 앞으로 이동
    printf("&i=%d\ti=%d\n",&i,i);
    printf("ptr=%d\t*ptr=%d\n",ptr,*ptr);//*ptr 값이 정의 되어있지 않아 쓰레기값 출력됨
    
}    