/*
��ȣ ���߱� ���α׷�
rand�Լ��� ���� 1~20 ������ ������ ����(real)�� �˾� ���ߴ� ���α׷�
�� 3���� ��ȸ�� ��
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findNumber(int,int);
int main(){
    int i,j,real,num;
    srand(time(NULL));//time�� seed������ ������ �ִ� srand �Լ� ȣ��
    real = rand()%20+1;//������ ���ϱ�. ū���� 20���� ������ 0~19�� ���� ������ +1���ָ� 1~20������ ������ ����������
    for(;;){
        printf("1~20������ ���� �� ������ ���ڸ� ���纸����. ��ȸ�� 3��\n");    
        scanf("%d",&num);//���� �Է� ��, num �� ����
        j=findNumber(num,real);//(�Է��� ����, ������)
        if(j==1){
            printf("correct\n");
            break;
        }
        else if(j==2){
            printf("again\n");
        }
        else if(j==0){
            printf("time over\n");
            break;
        }
    }
    return 0;
}

int findNumber(int num, int real){ //(�Է��� ����, ������)
    static int i=0,j;
    i++;//i=1,2,3
    if(i==3)//����
    return 0;//j=0
    if(num==real)//i=1,2 => �������� ������
    return 1;//j=1  correct
    else//�������� ���� ������ 
    return 2; //j=2  again
}