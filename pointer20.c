/* 
    포인터 변수의 연산
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