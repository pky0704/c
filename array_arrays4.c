/* 
data �迭�� ����ҿ� ����� �� �߿��� ���� ū ���� ã��
*/
#include <stdio.h>

void main()
{
    int data[9] = {4, 6, 9, 8, 7, 2, 5, 1, 3};
    int max = 0, i;
    for(i=0;i<9;i++){
        if(max<data[i]) max = data[i];
    }
    printf("data �迭�� ����� ���� ū ��= %d\n", max);
}    