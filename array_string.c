//�迭�� ���ڿ��� �����ϰ� ����ϱ�
#include <stdio.h>

void main()
{
    char data[6]={'h','a','p','p','y',0};//char data[6]="happy";
    //�迭 ���ڿ� ���������� 0(NULL)�� ����
    //0�� '\0'(�ƽ�Ű�ڵ� 0, �ƽ�Ű�ڵ� �տ� �������� �ִ´�)�̶�� ��� �ȴ�

    char ment[]="C programming~";
    printf("%s\n", data);
    printf("%s\n", ment);

    char a[]="Don't worry, Be happy!";
    char b[]="������ �ູ�Ұž�";
    printf("%s\n",a);
    printf("%s\n",b);
}    