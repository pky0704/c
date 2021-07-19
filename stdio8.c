/*
    길이 제한 없이 문자열 형식의 숫자를 정수로 변환하기
*/
#include<stdio.h>

void main()
{
    int num = 0, count= 0;
    char num_string[4] ="123";

    while(num_string[count] != 0){//문자열이 끝날때까지 반복 num_string[4] = 0
        num = num * 10 + (num_string[count] - '0');
        printf("count=%d\n",count);
        printf("num = %d * 10 + (%d - '0') = %d \n",num,count,num);
        count++;
        //num_string[1]=1 -> 0*10+('1'-'0') = 0 + (49-48=1) = 1;
        //count=1
        //num_string[2]=1 -> 0*10+('1'-'0') = 0 + ()
        //count=1
        //num_string[3]=1 -> 0*10+('1'-'0') 
        //count=1
    }
    printf("%s -> %d\n", num_string, num);
}