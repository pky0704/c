//배열에 문자열을 저장하고 출력하기
#include <stdio.h>

void main()
{
    char data[6]={'h','a','p','p','y',0};//char data[6]="happy";
    //배열 문자열 마지막에는 0(NULL)을 저장
    //0은 '\0'(아스키코드 0, 아스키코드 앞에 역슬러쉬 넣는다)이라고 적어도 된다

    char ment[]="C programming~";
    printf("%s\n", data);
    printf("%s\n", ment);

    char a[]="Don't worry, Be happy!";
    char b[]="걱정마 행복할거야";
    printf("%s\n",a);
    printf("%s\n",b);
}    