/*
    scanf = scan format
    ���� ǥ�� �Է� �Լ� 
    ����,���ڿ�,����, �Ǽ� ��� �Է� ���� �� �ִ� 
    �Է� ���� �������� ����, �ڸ���, �Է� ������ ������ �� �ִ�.
    %d ����(int), %hd ����(short int), %f(float), %lf(double), %c ����, %s ���ڿ�    
    
    scanf("%d", &data); => scanf("�Է����� ���� Ű����", �Է� ���� ���� ������ ������ �ּ�);

    scanf �� ������ ����� ����Ͽ� ���� ��ȯ�Ѵ�.
 
*/
#include<stdio.h>
//scanf �Լ��� ����Ͽ� ������ �Ǽ� �� �Է� �ޱ�
void main()
{
    int int_data;
    float float_data;

    scanf("%d", &int_data); //������ �Է� �ޱ�
    scanf("%f", &float_data);//�Ǽ��� �Է� �ޱ�

    printf("input : %d, %f \n", int_data, float_data);
}