/* 
int�� ������ ����� ���� 1����Ʈ ������ ����ϱ�
*/
#include <stdio.h>

void main()
{
    int data = 0x12345678, i;
    char *p = (char *)&data; //������ p�� char ���̶� &data �� char���� ����ȯ

    for(i =0; i<4; i++){ //4����Ʈ �����͸� ����Ʈ ������ ���� ����ϱ� ���� 4�� �ݺ���
        printf("%X,", *p); // p�� char * ���̶� ���� �ּҺ�Ʈ 1����Ʈ ũ�⸸ ����� 
        p++;
    }
}    