/*

*/
#include <stdio.h>

int main()
{
    int a[3]={1,2,3},i;
    int *ip;
    ip=a;
    
    for(i=0;i<3;i++){
        printf("a[%d]=%d\n",i,*(ip)); //a[0]=1,
        ip++;//��ĭ�� ������ ���� ��� 
    }

    return 0;
}    