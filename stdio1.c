/*
    getchar �Լ��� ����Ͽ� Ű���忡�� ���� �Ѱ� �Է� �ޱ�
*/
#include <stdio.h>
void main()
{
    int input_data;
    input_data = getchar(); //getchar()���� �ϳ��� �Է¹޴� ǥ�� �Է� �Լ�
    printf("input: %c\n", input_data);//int�� ������ ��ȯ���� �޴°� �Ϲ��������� char�� ������ �޾Ƶ� �ȴ�
}