/* 
data배열의 짝수번째 요소에 저장된 값을 합산하는 코드를 작성해 보세요
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
    printf("data 배열의 짝수 번째 요소에 저장된 값의 합= %d\n", result);

    
}    