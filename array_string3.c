//1.strlen�Լ��� ����Ͽ� ���ڿ� ���� ����ϱ�
//2.�ΰ��� ���ڿ� ��ġ�� (strcat �Լ�)

#include <stdio.h>
#include <string.h>//���ڿ� ���� �Լ� ������ ��Ƴ��� ��� ����

void main()
{
    int data_length; // ���ڿ� ���� ������ ����
    char data1[10] = {'h','a','p','p','y',0};
    data_length = strlen(data1);//���ڿ� ���̸� ���ϴ� �����Լ� strlen
    printf("���ڱ��� data length=%d\n", data_length);

    char data2[10] = {'a','b','c',0};
    char result[16];
    strcpy(result, data2);// data2�� ����� ���ڿ��� result�� ����. strcpy(����� �迭��, ������ �迭��)
    strcat(result, "def");// result�� �� �ڿ� "def"�� ������

    printf("%s+\"def\" = %s\n", data2, result);
}    