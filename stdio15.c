/*
    scanf�Լ��� ����Ͽ� ���� �Է� �ޱ�(1)
*/
#include<stdio.h>
void main()
{
    int num = 0;
    
    while(1){//�������� ���̸� �Է��� ������ �ݺ��ϱ� ���� ���� �ݺ� ���
        printf("input age : ");
        scanf("%d", &num); //

        if(num > 0 && num <=130){
            break; //���������� �ԷµǸ� �ݺ����� ����������.
        }
        else{
            printf("Incorrect Age! Input between 1 and 130\n");// �߸� �Է½� ���ѹݺ� 
        }
    }
    printf("your age : %d \n", num);
}

