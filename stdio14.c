/*
    scanf �Լ��� �Է����� Ű����� �ڷ����� ��ġ�ؾ� �Ѵ�
    printf �Լ��� ������ ���� ���� �޾� ����ڰ� ������ �������� �°� ����ϴ� ������� ������ �Լ�
    ������ �޴� %dŰ���带 ����ϸ� ������ �ڷ����� ������� 10������ ������ ���� ���
    scanf �Լ��� &�����ڸ� ����Ͽ� ������ �ּҸ� ���� �޴� ����̱� ������ %dŰ���带 ����ϸ� �ݵ�� �����ڷ����� int�� ���� ����ؾ��Ѵ�.
    => scanf�Լ��� �����͸� ����ϱ� ������ ������ �����ϴ� Ű����� ������ �ڷ����� ���� ������ ���α׷��� ������ �߻�

    char, unsigned char => %c
    int, unsigned int => %o %d %x
    float => %f
    double => %lf
    char *, char [] => #s
    short => %hd
*/
#include<stdio.h>
void main()
{
    char data1 = 5;
    short data2 = 6;
    int data3 = 7;
    float data4 = 8.0f;
    printf("%d %d %d %f\n", data1, data2, data3, data4); //ȭ��� ���������� 5,6,7 ��� 
    //scanf �Է� Ű����� �ڷ����� �ٸ��Ƿ� ���� �߻�
    scanf("%c %d %d %f", &data1, &data2, &data3, &data4); //5, 6, 7 �Է� = > 
    printf("%c %d %d %f\n", data1, data2, data3, data4); //��½� 5, 6, 7 �ȳ���

    //���� ����� 
    //scanf("%c %d %d %f", &data1, &data2, &data3, &data4); //5, 6, 7 �Է� = > �Է� Ű����� �ڷ����� �ٸ��Ƿ� ���� �߻�
    //printf("%d %d %d %f\n", data1, data2, data3, data4); //��½� 5, 6, 7 �ȳ���

}
