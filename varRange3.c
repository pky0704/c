/*
��������
*/

#include <stdio.h>
int i;//�������� ����. ������ X => �ʱ�ȭ 0
void printWhat();
int main(){
    printf("i(1)=%d\n",i);// 0
    int i=10;
    printf("i(2)=%d\n",i);//10
    printWhat();// 0
    return 0;
}
void printWhat(){
    printf("i(3)=%d\n",i);
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
