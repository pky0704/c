/* 
data�迭�� ¦����° ��ҿ� ����� ���� �ջ��ϴ� �ڵ带 �ۼ��� ������
*/
#include <stdio.h>

void main()
{
    int data[9] = {4, 6, 9, 8, 7, 2, 5, 1, 3};
    int result = 0,i;
    for(i=0;i<9;i+=2){
        result = result + data[i];
        //printf("result = %d\n",result);
    }
    printf("data �迭�� ¦�� ��° ��ҿ� ����� ���� ��= %d\n", result);

    
}    