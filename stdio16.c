/*
    scanf함수를 사용하여 나이 입력 받기(2)
*/
#include<stdio.h>
void main()
{
    int num = 0;
    
    while(1){//정상적인 나이를 입력할 때까지 반복하기 위해 무한 반복 사용
        printf("input age : ");
        if(scanf("%d", &num)==0){ //사용자의 입력 오류 확인 =>  
            rewind(stdin); //입력 버퍼를 모두 비움 
            printf("[Enter] digit number!!\n");
        }
        else{//입력값이 0이 아니면 
            if(num > 0 && num <= 130){// 0보다 크고 130이하 숫자만 정상적인 나이로 인정함
                break;
            }else{
                printf("Incorrect Age !\n"); //나이의 범위가 잘못 입력으로 알림
            }
        }
    }
    printf("your age : %d \n", num);
}

