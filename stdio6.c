/*
    gets함수로 문자열을 입력 받을 때 입력 횟수 제한
*/
#include <stdio.h>

int GetMyString(char buffer[], int limit){ //buffer: 입력한 문자열 저장할 배열, limit:최대입력 가능한 문자 개수 ,
    int i;
    for(i = 0; i< limit; i++){
        buffer[i] = getchar();
        if(buffer[i]=='\n'){//엔터키가 체크되면 사용자 입력이 완료 => 문자열을 완성한 뒤 함수 종료
            buffer[i] = 0; // 엔터키 위치에 0을 넣어서 문자열 완성
            return 1; //1을 반환하면 정상 입력
        }
    }
    buffer[i]=0; //반복문을 빠져 나옴 => 입력 개수 제한을 초과했다는 뜻, 현재 위치에 0을 넣고 문자열 완성 
rewind(stdin);//표준 입력 버퍼에 남아있는 문자들을 제거
return 0; //0을 반환하면 너무 길게 입력해서 제한된 개수만 받았다는 뜻
}

void main()
{
    char input_string[10];  
    int state;

    state = GetMyString(input_string, 9);//최대 9개까지만 입력 받겠다고 제한함

    if(state == 1)//정상 입력
        printf("input : %s\n", input_string);
    else printf("input : %s -> out of range\n", input_string);//범위 초과
}