#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = NULL;
    int num = 0;
    int sum = 0;
    int i;
    printf("���� ������ ������ �Է�");
    scanf("%d", &num);

    p = (int *)calloc(sizeof(int),num);

    if(p == NULL)
        printf("�����Ҵ� ����");
    else{
        for(i=0; i<num;i++){
            printf("%d��° ���� �Է��ϼ���",i);
            scanf("%d",&p[i]);
            sum+=p[i];
        }
    }
    printf("�Է��� �������� ��=%d",sum);

    free(p);
    p=NULL;
}