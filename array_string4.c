/*
    ���ڿ� ���� ����� �Լ� : gets, puts
    gets(char�� �迭��), ���͸� ������ ������ ��ü�� �ϳ��� ���ڿ��� �迭�� ���� (��ĭ, �ǹ��� ��� ����)
    puts(): ���ڿ� ����� char�� �迭�� �迭���� �ָ� ���ڿ��� ȭ�鿡 ��� = printf �Լ��� ����
*/
#include <stdio.h>

void main(void)
{
    char str[80];
    printf("���ڿ� �Է�: ");// puts �Լ��� ������ : printf -> �޼��� ����� �� �ٲ� x 
    gets(str); 
    puts("�Էµ� ���ڿ�: ");//�ٹٲ�O
    puts(str);

    return 0;
}    