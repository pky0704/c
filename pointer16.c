/* 
    ������ ������ ����
*/
#include <stdio.h>

int main()
{
    int i=10;
    int *ptr=&i;

    printf("&i=%d\ti=%d\n",&i,i);
    printf("ptr=%d\t*ptr=%d\n",ptr,*ptr);

    printf("case 1 ptr++\n");

    ptr++;//4byte �� ����
    printf("&i=%d\ti=%d\n",&i,i);
    printf("ptr=%d\t*ptr=%d\n",ptr,*ptr);//*ptr ���� ���� �Ǿ����� �ʾ� �����Ⱚ ��µ�
    
}    