/* 
data 배열의 각요소에 저장된 값 중에서 가장 큰 값을 찾기
*/
#include <stdio.h>

void main()
{
    int data[9] = {4, 6, 9, 8, 7, 2, 5, 1, 3};
    int max = 0, i;
    for(i=0;i<9;i++){
        if(max<data[i]) max = data[i];
    }
    printf("data 배열에 저장된 가장 큰 값= %d\n", max);
}    