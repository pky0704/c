/*
    gets함수를 사용하여 두 개의 숫자를 입력 받아 합산하기
*/
#include<stdio.h>
//문자열을 정수로 바꾸는 함수
int ArrayToInteger(char string[]){
    int count = 0, num = 0;
    while(string[count] != 0){ //문자열이 끝날때까지 반복함  
    //fgets함수 사용시  문자열 끝에 \n 이 추가 되기 떄문에 아래와 같이 수정해준다 
    //while(string[count] != 0 && string[count] != '/n')
        num = num * 10 + string[count] - '0';
        count++; // 다음 문자로 이동
    }
    return num;
}
void main()
{
    int first_num, second_num;
    char first_string[16], second_string[16];

    printf("input first number : ");
    gets(first_string); //첫번째 문자 입력 받기
    printf("input second number : ");
    gets(second_string);

    first_num = ArrayToInteger(first_string); //문자열 -> 정수 
    second_num = ArrayToInteger(second_string);

    printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}