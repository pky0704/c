/*

*/
#include <stdio.h>

int main()
{
    int a[3] = {1,2,3},i;
    int *ip;
    ip = a; 

    for(i=0;i<3;i++){//0,1,2
        printf("a[%d] = %d\n",i,a[i]);
        printf("a[%d] = %d\n",i,*(a+i));//a+0,a+1,a+2
        printf("a[%d] = %d\n",i,ip[i]);
        printf("a[%d] = %d\n",i,*(ip+i));
        printf("\n");
    }
    return 0;
}    