/* 
���� �ּ� ���� ������� ���� �� ��ȯ�ϱ�
if�� ������ �����ص� main�Լ��� start, end ���� ������� �ʴ´� => ������ ���� ��� �ʿ� 
*/
#include <stdio.h>
void swap(int a, int b) /// 96, 5
{
    int temp = a; // temp = 96
    a = b; //a = 5
    b = temp; // b = 96 
}
void main()
{
    int start = 96, end =5;
    
    printf("before : start = %d, end =%d\n", start, end);
    if(start>end){
        swap(start, end);
    }
    printf("after : start = %d, end =%d\n", start, end);
}    