/*
번호 맞추기 프로그램
rand함수로 얻은 1~20 사이의 임의의 숫자(real)를 알아 맞추는 프로그램
총 3번의 기회를 줌
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findNumber(int,int);
int main(){
    int i,j,real,num;
    srand(time(NULL));//time을 seed값으로 가지고 있는 srand 함수 호출
    real = rand()%20+1;//랜덤값 구하기. 큰수를 20으로 나누면 0~19의 값이 나오고 +1해주면 1~20사이의 랜덤값 얻을수있음
    for(;;){
        printf("1~20사이의 숫자 중 임의의 숫자를 맞춰보세요. 기회는 3번\n");    
        scanf("%d",&num);//숫자 입력 후, num 에 저장
        j=findNumber(num,real);//(입력한 숫자, 랜덤값)
        if(j==1){
            printf("correct\n");
            break;
        }
        else if(j==2){
            printf("again\n");
        }
        else if(j==0){
            printf("time over\n");
            break;
        }
    }
    return 0;
}

int findNumber(int num, int real){ //(입력한 숫자, 랜덤값)
    static int i=0,j;
    i++;//i=1,2,3
    if(i==3)//종료
    return 0;//j=0
    if(num==real)//i=1,2 => 랜덤값과 같으면
    return 1;//j=1  correct
    else//랜덤값과 같지 않으면 
    return 2; //j=2  again
}