/*
지역 변수n 에 대하여 재귀함수를 이용해 n의 팩토리얼과 피보나치 값을 구하세요.
피보나치 함수 : 해당 항은 앞의 두 항을 합한 값이 온다 
*/
#include <stdio.h>
#include <time.h>
int fac(int);
int fibo(int);

int main(void){
    int n = 20, i;
    time_t start, end;
    start = clock();
    for(i=1; i<=n; i++){
        printf("%d!은 %d입니다.\n", i, fac(i));
    }
    for(i=1; i<=n; i++){
        printf("%d의 피보나치 값은 %d입니다.\n",i,fibo(i));
    }
    end = clock();
    printf("time = %lf\n", (double)(end - start)/1000);//마이크로초
    return 0;
}

int fac(int n){ // 5! = 5*4*3*2*1
    if(n<=1)
        return 1;
    else
        return n * fac(n-1);
}
int fibo(int n){//1,1,2,3,5,8
    if(n==1 || n==2)
        return 1;
    else 
        return fibo(n-1)+fibo(n-2);
}