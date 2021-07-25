/*
    scanf함수는 지정된 버퍼의 크기보다 더 많은 양의 문자를 저장할수 있기 때문에
    버퍼오버플로우 발생 => 보완 =>scanf_s 
    scanf_s("%s",arr,sizeof(arr))  
    scanf와 다른점 :입력받을 크기(sizeof(a))를 추가로 입력
*/

#include <stdio.h>

int count(int);

int main(){
    int ans;

    while(1){// 무한 반복 
        printf("1+2의 답은:");
        scanf_s("%d", &ans);
        if(count(ans)==1)
            break;
    }
    return 0;
}

int count(int n){
    static int i = 0;
    i++;
    if(n==3){
        printf("%d번만에 맞췄습니다. 축하합니다.\n", i);
        return 1; // 종료
    }else{
        printf("%d번째 기회. 틀렸습니다. 다시 해보세요\n", i);
        return 2;
    }
}
