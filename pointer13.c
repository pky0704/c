/* 

*/
#include <stdio.h>

void swap(int x, int y){
    int tmp;
    printf("in swap %d,%d\n",x,y);
    tmp = x; 
    x=y; 
    y=tmp;
    printf("in swap %d,%d\n",x,y);
}

int main()
{
    int a = 100;
    int b = 200;

    printf("swap() 호출 전 a와 b: %d, %d\n",a,b);
    swap(a,b);
    printf("swap() 호출 후 a와 b: %d, %d\n",a,b);

    return 0;
    
}    