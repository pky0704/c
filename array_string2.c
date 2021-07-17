//배열에 저장된 문자열의 길이를 구하는 함수 만들기
#include <stdio.h>
int GetStringLength(char data[])
{
    int count =0;
    while(data[count]) //= while(data[count]!=0) (종결 조건 )
    //0이 아닐 때까지 반복, 0이 나오면 종료 => 0이 나올 때까지 문자의 개수를 더함
    //★if(A) = if(0 != A)
    //★if(!A) = if(0 == A)
        count++;
    return count;
}
void main()
{
    int data_length; // 문자열 길이 저장할 변수
    //char data[10] = {'h','a','p','p','y',0};
    char data[10] = {'h','a','p','p','y',0};
    //char data[] = "hello world";
    data_length = GetStringLength(data);//data변수에 저장된 문자열 길이 구하기
    printf("문자길이 data length=%d\n", data_length);
}    