/*
    atoi �Լ��� ����Ͽ� �� ���� ���ڸ� �Է� �޾� �ջ��ϱ�
   = ArrayToInteger
*/
#include<stdio.h>
#include<stdlib.h> //atoi �Լ���  ����ϱ� ���� ����
//���ڿ��� ������ �ٲٴ� �Լ�
int ArrayToInteger(char string[]){
    int count = 0, num = 0;
    while(string[count] != 0){ //���ڿ��� ���������� �ݺ���  
    //fgets�Լ� ����  ���ڿ� ���� \n �� �߰� �Ǳ� ������ �Ʒ��� ���� �������ش� 
    //while(string[count] != 0 && string[count] != '/n')
        num = num * 10 + string[count] - '0';
        count++; // ���� ���ڷ� �̵�
    }
    return num;
}
void main()
{
    int first_num, second_num;
    char first_string[16], second_string[16];

    printf("input first number : ");
    gets(first_string); //ù��° ���� �Է� �ޱ�
    printf("input second number : ");
    gets(second_string);

    first_num = atoi(first_string); //���ڿ� -> ����
    second_num = atoi(second_string);

    printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}