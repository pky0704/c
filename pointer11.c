/* 
int�� ������ ����� ���� 1����Ʈ ������ ����ϱ�
*/
#include <stdio.h>

void main()
{
    int data = 0x12345678, i;
    char *p = (char *)&data; //������ p�� char ���̶� &data �� char���� ����ȯ

    for(i=0; i<4; i++){//p�� �ּҰ��� �������� �ʰ� data���� ���� 1����Ʈ�� ���
        printf("%X,", *(p+i));
    }
}    