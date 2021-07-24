/*

*/
#include <stdio.h>

int main()
{
    int a[3],i;
    int *ip;
    ip = a; 

    for(i=0;i<3;i++){//0,1,2
        printf("a[%d]의 값을 입력하세요\n",i);
        scanf("%d",&ip[i]);
    }
    for(i=0;i<3;i++){//0,1,2
        printf("a[%d]=%d\n",i,a[i]); 
        printf("a[%d]=%d\n",i,*(a+i));
        printf("a[%d]=%d\n",i,ip[i]);
        printf("a[%d]=%d\n",i,*(ip+i));
        //모두 같은 표현 방식 
    }   
    return 0;
}    