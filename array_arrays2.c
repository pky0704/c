/* 
�������迭
2���� �迭�� ����Ͽ� �ٵ��� ������ �����ϰ� �˷��ֱ�
*/
#include <stdio.h>

void main()
{
    //1 ������, 2, ��, 0 ��ĭ
    char data[3][4] = {{0,0,2,0},{1,1,0,0},{2,1,0,2}};
    int x, y;
    //3�� 4�� �����
    for(y=0; y<3 ; y++){ //3�� �����
        for (x=0; x<4 ; x++){ //4�� �����
            printf("%d�� %d��",y+1,x+1);

            if (data[y][x] == 1)
                printf("��\n");
            else if(data[y][x] == 2)
                printf("��\n");
            else
                printf("_\n");
        }
    }
}    