/*
typedef : ���ο� �̸����� �����

scanf ���� �����߻�
�����߻����� : �ý��� �������� ������ Ȯ���ϱ� ����
�ذ��� 
1. scanf_s
2. #define_CRT_SECURE_NO_WARNINGS
3.������Ʈ > �Ӽ� 
    �����Ӽ� > c/c++ > ��ó���� > ;�ڿ� _CRT_SECURE_NO_WARNINGS; �߰��� 
4.#pragma warning(disable:4996)

typedef struct struct6
{
    int num;
    float kor;
}St;
//=> struct struct6 St
//=> struct6 St
 
//or

typedef struct
{
    int num;
    float kor;
}St;
//=> struct St

*/
#include <stdio.h>

struct a{
    int num;
    double total;
};

int main(){
    struct a *pTest;
    struct a p={1,100.99};
    pTest=&p;
    
    printf("num=%d total=%lf\n", p.num, p.total);
    printf("num=%d total=%lf\n", (*pTest).num, (*pTest).total);
    
    return 0; 
}