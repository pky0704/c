/* 
다차원배열
2차원 배열을 사용하여 바둑판 정보를 저장하고 알려주기
*/
#include <stdio.h>

void main()
{
    //1 검은돌, 2, 흰돌, 0 빈칸
    char data[3][4] = {{0,0,2,0},{1,1,0,0},{2,1,0,2}};
    int x, y;
    //3행 4열 만들기
    for(y=0; y<3 ; y++){ //3행 만들기
        for (x=0; x<4 ; x++){ //4열 만들기
            printf("%d행 %d열",y+1,x+1);

            if (data[y][x] == 1)
                printf("●\n");
            else if(data[y][x] == 2)
                printf("○\n");
            else
                printf("_\n");
        }
    }
}    