/* 
    ������ ������ ����
*/
#include <stdio.h>

int main()
{
    int i=10;
    int *ptr;
    ptr=&i;//ptr�� i�� �ּҸ� ����Ų��

    printf("&i=%d\ti=%d\n",&i,i);
    printf("ptr=%d\t*ptr=%d\n",ptr,*ptr);

    printf("case 3 *(++ptr)\n");
    (*ptr)++; //i=11
    *(++ptr);//ptr�� ������ �ּҰ� ����Ű�� ���� ������ ��, ptr�� �ּҸ� ������ �̵�
    printf("&i=%d\ti=%d\n",&i,i);
    printf("ptr=%d\t*ptr=%d\n",ptr,*ptr);//*ptr ���� ���� �Ǿ����� �ʾ� �����Ⱚ ��µ�
    
}    