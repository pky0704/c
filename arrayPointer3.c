/*
    �����͸� ����Ͽ� �迭�� �� ��ҿ� ����� �� �ջ�
    
*/
#include<stdio.h>
int main()
{
    int arr[5]= {1,2,3,4,5};
    int *arptr;
    arptr=arr; //arptr������ ������ arr�迭�� �ּҰ��� ����
    int i;

    for(i=0; i<5; i++){
        //printf("arr[%d]=%d\n",i,arr[i]);
        //printf("arr[%d]=%d\n",i,arptr[i]);
        printf("arr[%d]=%d\n",i,*(arr+i));
        //printf("arr[%d]=%d\n",i,*(arptr+i));
    }
}

