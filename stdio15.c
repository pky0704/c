/*
    scanf함수를 사용하여 나이 입력 받기(1)
*/
#include<stdio.h>
void main()
{
    int num = 0;
    
    while(1){//정상적인 나이를 입력할 때까지 반복하기 위해 무한 반복 사용
        printf("input age : ");
        scanf("%d", &num); //

        if(num > 0 && num <=130){
            break; //정상적으로 입력되면 반복문을 빠져나간다.
        }
        else{
            printf("Incorrect Age! Input between 1 and 130\n");// 잘못 입력시 무한반복 
        }
    }
    printf("your age : %d \n", num);
}

