/* 
    포인터 변수의 연산
*/
#include <stdio.h>

int main()
{
    int i=10;
    printf("i의 주소 = %p\n",&i);
    printf("i의 주소가 가리키는 값 = %d\n",*(&i));//=10  i주소 안에 들어있는 값
    return 0;\
}    