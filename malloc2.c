#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = NULL;
    int num = 0;
    int sum = 0;
    int i;
    printf("합할 정수의 개수를 입력");
    scanf("%d", &num);

    p = (int *)calloc(sizeof(int),num);

    if(p == NULL)
        printf("동적할당 실패");
    else{
        for(i=0; i<num;i++){
            printf("%d번째 값을 입력하세요",i);
            scanf("%d",&p[i]);
            sum+=p[i];
        }
    }
    printf("입력한 정수들의 합=%d",sum);

    free(p);
    p=NULL;
}