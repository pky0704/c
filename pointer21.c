/*

*/
#include <stdio.h>

int main()
{
    int a[3] = {1,2,3};
    int *ip;
    ip = a; 

    printf("a의 주소 = %d\n",a);
    printf("a의 주소에 들어있는 값 = %d\n",*a);
    printf("ip에 들어있는 값 = %d\n",ip);
    printf("ip안에 들어있는 주소가 가리키는 값 = %d\n",*ip);

    
    return 0;
}    