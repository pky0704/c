/*
#include <time.h>
C���� �����ϴ� ǥ�� ���̺귯��
��¥�� �ð��� �����ų� ������ �� �ִ�
���� ������Ʈ�� ���� ������Ʈ �α� ���� ó���� ����
clock clock(); //���α׷��� ���۵ɶ����� ���� �ð��� ms������ ��ȯ
time_t time();//Ÿ�ӽ����� ���� ���. ����ð��� ����. s������ ��ȯ
*/

#include <stdio.h>
#include <time.h>

int main(){
    time_t start, end;//���� �ð��� ���� 
    auto int i, sum1=0; //auto : �������� ��������

    start = clock();//1clock�� 1ms. ���۽ð� ����
    for(i=1;i<1000000;i++){
        if(i%2==0)
        sum1+=i;
    }
    end=clock();//����ð� ����

    printf("sum=%d\n", sum1);
    printf("time=%5.2lfms\n",(double)(end - start));//����ð� ���. %5.2lf : 000.00 �Ǽ�

    return 0;
}