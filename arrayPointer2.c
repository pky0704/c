/*
    �����͸� ����Ͽ� �迭�� �� ��ҿ� ����� �� �ջ�
    
*/
#include<stdio.h>
void main()
{
    char data[5]= {1, 2, 3, 4, 5};
    int result = 0, i; //�ջ꿡 ����� result ������ 0���� �ʱ�ȭ
    char *p = data; // data�迭�� ���� ��ġ�� ������ ���� p�� ������ =&data[0] = &*(data+0) = & * data = data

    for(i=0; i<5; i++){
        result = result + *p;
        p++;
        printf("result = %d\n", result);
      
    }
    printf("data �迭�� �� ����� ���� %d�Դϴ�\n", result);
}

