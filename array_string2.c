//�迭�� ����� ���ڿ��� ���̸� ���ϴ� �Լ� �����
#include <stdio.h>
int GetStringLength(char data[])
{
    int count =0;
    while(data[count]) //= while(data[count]!=0) (���� ���� )
    //0�� �ƴ� ������ �ݺ�, 0�� ������ ���� => 0�� ���� ������ ������ ������ ����
    //��if(A) = if(0 != A)
    //��if(!A) = if(0 == A)
        count++;
    return count;
}
void main()
{
    int data_length; // ���ڿ� ���� ������ ����
    //char data[10] = {'h','a','p','p','y',0};
    char data[10] = {'h','a','p','p','y',0};
    //char data[] = "hello world";
    data_length = GetStringLength(data);//data������ ����� ���ڿ� ���� ���ϱ�
    printf("���ڱ��� data length=%d\n", data_length);
}    