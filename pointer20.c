/* 
    ������ ������ ����
*/
#include <stdio.h>

int main()
{
    int i=10;
    int *ip;
    ip=&i;

    printf("i�� �ּ�=%p\n",&i);
    printf("i�� �ּҰ� ����Ű�� ��=%d\n",*(&i));
    printf("�����ͺ��� ip�� �ּ�=%p\n",&ip);
    printf("�����ͺ��� ip�� ��=%d\n",ip);
    printf("�����ͺ��� ip�� ����Ű�� ��=%d\n",*ip);

    return 0;
}    