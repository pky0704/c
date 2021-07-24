/*
#include <time.h>
C언어에서 제공하는 표준 라이브러리
날짜와 시간을 얻어오거나 조작할 수 있다
정보 업데이트에 대한 업데이트 로그 등의 처리에 적합
clock clock(); //프로그램이 시작될때부터 지난 시간을 ms단위로 반환
time_t time();//타임스탬프 값을 출력. 현재시간을 리턴. s단위로 반환
*/

#include <stdio.h>
#include <time.h>

int main(){
    time_t start, end;//현재 시간을 리턴 
    auto int i, sum1=0; //auto : 지역변수 생략가능

    start = clock();//1clock은 1ms. 시작시간 저장
    for(i=1;i<1000000;i++){
        if(i%2==0)
        sum1+=i;
    }
    end=clock();//종료시간 저장

    printf("sum=%d\n", sum1);
    printf("time=%5.2lfms\n",(double)(end - start));//실행시간 출력. %5.2lf : 000.00 실수

    return 0;
}