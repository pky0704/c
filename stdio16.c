/*
    scanf�Լ��� ����Ͽ� ���� �Է� �ޱ�(2)
*/
#include<stdio.h>
void main()
{
    int num = 0;
    
    while(1){//�������� ���̸� �Է��� ������ �ݺ��ϱ� ���� ���� �ݺ� ���
        printf("input age : ");
        if(scanf("%d", &num)==0){ //������� �Է� ���� Ȯ�� =>  
            rewind(stdin); //�Է� ���۸� ��� ��� 
            printf("[Enter] digit number!!\n");
        }
        else{//�Է°��� 0�� �ƴϸ� 
            if(num > 0 && num <= 130){// 0���� ũ�� 130���� ���ڸ� �������� ���̷� ������
                break;
            }else{
                printf("Incorrect Age !\n"); //������ ������ �߸� �Է����� �˸�
            }
        }
    }
    printf("your age : %d \n", num);
}

