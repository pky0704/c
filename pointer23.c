/*

*/
#include <stdio.h>

int main()
{
    int a[3],i;
    int *ip;
    ip = a; 

    for(i=0;i<3;i++){//0,1,2
        printf("a[%d]�� ���� �Է��ϼ���\n",i);
        scanf("%d",&ip[i]);
    }
    for(i=0;i<3;i++){//0,1,2
        printf("a[%d]=%d\n",i,a[i]); 
        printf("a[%d]=%d\n",i,*(a+i));
        printf("a[%d]=%d\n",i,ip[i]);
        printf("a[%d]=%d\n",i,*(ip+i));
        //��� ���� ǥ�� ��� 
    }   
    return 0;
}    