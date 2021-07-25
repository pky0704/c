/*
���� ����n �� ���Ͽ� ����Լ��� �̿��� n�� ���丮��� �Ǻ���ġ ���� ���ϼ���.
�Ǻ���ġ �Լ� : �ش� ���� ���� �� ���� ���� ���� �´� 
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
        printf("%d!�� %d�Դϴ�.\n", i, fac(i));
    }
    for(i=1; i<=n; i++){
        printf("%d�� �Ǻ���ġ ���� %d�Դϴ�.\n",i,fibo(i));
    }
    end = clock();
    printf("time = %lf\n", (double)(end - start)/1000);//����ũ����
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