/*
모든 변수는 메모리 안의 주소를 가짐
포인터 변수도 주소를 가짐
변수의 주소를 출력하기 위해 &연산자 사용
포인터 변수는 다른 변수의 주소를 저장함
포인터 변수가 저장한 주소가 가리키는 값을 출력하기 위해 *연산자 사용 
*/
#include <stdio.h>

int main()
{
    int i=10;
    int *ip;
    ip=&i;

    printf("i의 주소=%p\n",&i);
    printf("i의 주소가 가리키는 값=%d\n",*(&i));
    printf("포인터변수 ip의 주소=%p\n",&ip);
    printf("포인터변수 ip의 값=%d\n",ip);
    printf("포인터변수 ip가 가리키는 값=%d\n",*ip);

    return 0;
}    