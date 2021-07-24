/*
static�� ����Ͽ� case1�� case2�� ���� ����

static : ��������. ���������� �������� ��ȯ��
���α׷��� ����Ǵ� ���� �ش� ������ ���� ��ȭ�� �����Ǵ�
�����Ҵ������� ��ȯ�� ���� (�����Ⱓ : ���α׷��� ������ ����(����))
*/

#include <stdio.h>
int exampleStatic(int);

int main(){
    int i=0,j;
    for(j=1;j<=3;j++){
        printf("i=%d\n",exampleStatic(i));
    }
    return 0;
}

//case1 - ������ ���� ���� static ���(���� -> ����)
// int exampleStatic(int i){
//     static int si=1;
//     si++;
//     printf("si=%d\n",si);
//     return i+si;
// }
//case2 - ���� ����
int exampleStatic(int i){
    int si=1;
    si++;
    printf("si=%d\n",si);
    return i+si;
}
