/* 
void*�� ������
void*�� ����Ͽ� ��� �޸��� ũ�� �����ϱ�
*/
#include <stdio.h>

int GetData(void *p_data, char type){
    int result = 0;
    //type������ ����� ���� �������� �� ��ȯ�� �ٸ��� ��
    if(type == 1) 
        result = *(char *)p_data;//0x78(1����Ʈ)�� �����
    else if(type == 2) 
        result = *(short *)p_data;//0x5678(2����Ʈ)�� �����
    else if(type == 4) 
        result = *(int *)p_data;//0x12345678(4����Ʈ)�� �����
    return result;
}

void main()
{
    int data = 0x12345678;
    printf("%X\n", GetData(&data, 2));//data�������� 2����Ʈ ũ�⸸ �����
}    