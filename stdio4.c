/*
    getc�Լ� 
    getc(stdin);
    getchar�Լ��� getc�Լ��� ��ü�� �� �ִ�
    getchar�Լ��� getc�Լ��� �̿��� ���� �Լ�
    ���� �ϳ��� �Է� �޴� �Լ�
    ǥ������� , ��������¿� ���

    gets�Լ� : ���ڿ� �Է� �޴� �Լ�
    get string
    �ѹ��� �������ڸ� �Է� ���� �� �ִ�. ����Ű�� �Է��� ������ �Է��� ��� ���ڸ� �ϳ��� ���ڿ��� ����
    gets�Լ��� �Ű������� char �迭�� ����� ����(input_string)�� ���� �ּҸ� �Ѱ��־�� �Ѵ�.
    rewind�Լ��� ����� �Է� ���۸� ����� �ʿ䰡 ����()
    �ڿ���Ű�� ������,null���� 0����
    gets�Լ� ���� ���� �߻��� gets�Լ� ��� fgets�Լ� ���
    fgets�Լ� : ���Ͽ��� �����͸� �о���� �Լ� 
        char int_string[10]
        fgets(input_string, 10, stdin)
    �ڿ���Ű��, null����0 ����


    gets�Լ��� ���ڿ� �Է¹ޱ�
*/
#include <stdio.h>
void main()
{
    char input_string[10];  //���ڿ��� �������� null���� 0�� �����ؾ� �ϹǷ� �ִ� 9���� ���ڱ��� ���� ����
    gets(input_string);//���ڿ��� �Է¹޾� input_string�� ������
    printf("input: %s\n", input_string);//�Է¹��� ���ڿ� ���
}