/* 
    포인터를 이용한 반환
*/
#include <stdio.h>

int get_line_parameter(int x1,int y1,int x2,int y2,float *slope, float *yintercept){
    if(x1 == x2)
        return -1;
    else{
        *slope = (float)(y2-y1)/(float)(x2-x1);
        printf("*slope = (float)(%d-%d)/(float)(%f-%f)\n",*slope,y2,y1,x2,x1);
        *yintercept = y1 -(*slope)*x1;
        return 0;
    }
}

int main()
{
    float s, y;

    if(get_line_parameter(3,3,6,6, &s, &y)== -1)
        printf("에러");
    else
        printf("기울기는 %.f, y절편은 %f",s, y);

    return 0;
    
}    