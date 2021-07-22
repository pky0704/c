/*
    포인터를 사용하여 배열의 각 요소에 저장된 값 합산
    
*/
#include<stdio.h>
void main()
{
    char data[5]= {1, 2, 3, 4, 5};
    int result = 0, i; //합산에 사용할 result 변수는 0으로 초기화
    char *p = data; // data배열의 시작 위치를 포인터 변수 p에 저장함 =&data[0] = &*(data+0) = & * data = data

    for(i=0; i<5; i++){
        result = result + *p;
        p++;
        printf("result = %d\n", result);
      
    }
    printf("data 배열의 각 요소의 합은 %d입니다\n", result);
}

