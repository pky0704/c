/*
    포인터를 사용하여 배열의 각 요소에 저장된 값 합산
    
*/
#include<stdio.h>
int main()
{
    int arr[5]= {1,2,3,4,5};
    int *arptr;
    arptr=arr; //arptr포인터 변수가 arr배열의 주소값을 저장
    int i;

    for(i=0; i<5; i++){
        //printf("arr[%d]=%d\n",i,arr[i]);
        //printf("arr[%d]=%d\n",i,arptr[i]);
        printf("arr[%d]=%d\n",i,*(arr+i));
        //printf("arr[%d]=%d\n",i,*(arptr+i));
    }
}

