/* 
������ ������ �ּ� ����
*/
#include <stdio.h>

void main()
{
    short data = 0;
    short *p = &data;
     
    p = p + 1; // ������ ������ ����� �ּ� ���� 1��ŭ ������Ŵ

    printf("%p",p);
}    