/*
    ���� ���ڷ� �����ؼ� scanf�Լ��� 8,10,16���� �Է� �ޱ�
    8���� %o, 10���� %d, 16���� %x
    scanf �Լ��� �Է� ���� Ű����� �ڷ����� ��ġ�ؾ� �Ѵ�
*/
#include<stdio.h>
void main()
{
    int num1, num2, num3;
    scanf("%o %d %x", &num1, &num2, &num3);// 8, 10, 16���� �� �Է� �ޱ� 
    printf("input : %d, %d, %d \n", num1, num2, num3);//�Է� ���� ���� ���� 10������ ���
}