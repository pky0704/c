/*
    gets�Լ��� ���ڿ��� �Է� ���� �� �Է� ��ұ��� ó���ϱ�
    ctrl+c :�Է� ��� ó��
*/
#include <stdio.h>
void main()
{
    char input_string[10];  
    if(NULL != gets(input_string)){
        printf("input : %s\n", input_string);
    }else{
        printf("input => Canceled\n"); //ctrl+c :�Է� ��� ó��(gets�Լ� ����) , ����� �Է��� ���������� �Ϸ�����ʾ� ��ȯ���� null�϶� ����� ���� 
    }
}��