/*

*/
#include <stdio.h>

int main()
{
    int a[3] = {1,2,3};
    int *ip;
    ip = a; 

    printf("a�� �ּ� = %d\n",a);
    printf("a�� �ּҿ� ����ִ� �� = %d\n",*a);
    printf("ip�� ����ִ� �� = %d\n",ip);
    printf("ip�ȿ� ����ִ� �ּҰ� ����Ű�� �� = %d\n",*ip);

    
    return 0;
}    