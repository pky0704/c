/* 
다차원배열
1차원 배열을 사용하여 바둑판 정보를 저장하고 알려주기
*/
#include <stdio.h>

void main()
{
    //1 검은돌, 2, 흰돌, 0 빈칸
    char data[12] = {0,0,2,0,1,1,0,0,2,1,0,2};
    int i, x, y;

    for(i=0; i<12 ; i++){ //3행 4열 만들기
        x=i%4+1; // 열 번호 구하기 (4열)
        y=i/4+1; //행 번호 구하기 (3행)
        printf("%d행 %d열",y,x);
        
        if (data[i] == 1)
            printf("●\n");
        else if(data[i] == 2)
            printf("○\n");
        else
            printf("_\n");
    }
}    