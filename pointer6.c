/* 
직접 주소 지정 방식으로 변수 값 교환하기
if문 조건을 만족해도 main함수의 start, end 값이 변경되지 않는다 => 포인터 변수 사용 필요 
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