/*
    scanf�Լ��� ������ ������ ũ�⺸�� �� ���� ���� ���ڸ� �����Ҽ� �ֱ� ������
    ���ۿ����÷ο� �߻� => ���� =>scanf_s 
    scanf_s("%s",arr,sizeof(arr))  
    scanf�� �ٸ��� :�Է¹��� ũ��(sizeof(a))�� �߰��� �Է�
*/

#include <stdio.h>

int count(int);

int main(){
    int ans;

    while(1){// ���� �ݺ� 
        printf("1+2�� ����:");
        scanf_s("%d", &ans);
        if(count(ans)==1)
            break;
    }
    return 0;
}

int count(int n){
    static int i = 0;
    i++;
    if(n==3){
        printf("%d������ ������ϴ�. �����մϴ�.\n", i);
        return 1; // ����
    }else{
        printf("%d��° ��ȸ. Ʋ�Ƚ��ϴ�. �ٽ� �غ�����\n", i);
        return 2;
    }
}
