/*
    gets�Լ��� ���ڿ��� �Է� ���� �� �Է� Ƚ�� ����
*/
#include <stdio.h>

int GetMyString(char buffer[], int limit){ //buffer: �Է��� ���ڿ� ������ �迭, limit:�ִ��Է� ������ ���� ���� ,
    int i;
    for(i = 0; i< limit; i++){
        buffer[i] = getchar();
        if(buffer[i]=='\n'){//����Ű�� üũ�Ǹ� ����� �Է��� �Ϸ� => ���ڿ��� �ϼ��� �� �Լ� ����
            buffer[i] = 0; // ����Ű ��ġ�� 0�� �־ ���ڿ� �ϼ�
            return 1; //1�� ��ȯ�ϸ� ���� �Է�
        }
    }
    buffer[i]=0; //�ݺ����� ���� ���� => �Է� ���� ������ �ʰ��ߴٴ� ��, ���� ��ġ�� 0�� �ְ� ���ڿ� �ϼ� 
rewind(stdin);//ǥ�� �Է� ���ۿ� �����ִ� ���ڵ��� ����
return 0; //0�� ��ȯ�ϸ� �ʹ� ��� �Է��ؼ� ���ѵ� ������ �޾Ҵٴ� ��
}

void main()
{
    char input_string[10];  
    int state;

    state = GetMyString(input_string, 9);//�ִ� 9�������� �Է� �ްڴٰ� ������

    if(state == 1)//���� �Է�
        printf("input : %s\n", input_string);
    else printf("input : %s -> out of range\n", input_string);//���� �ʰ�
}