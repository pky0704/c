/*

*/
#include <stdio.h>

int main()
{
    int i=10, *ip; //4byte
    double f=20, *fp; //8byte
    char c='a', *cp; //1byte
    ip=&i;
    fp=&f;
    cp=&c;
    
    printf("i=%p ip=%p f=%p fp=%p c=%p cp=%p\n",&i,ip,&f,fp,&c,cp);  
    printf("++\n");
    ip++;
    fp++;
    cp++;
    printf("i=%p ip=%p f=%p fp=%p c=%p cp=%p\n",&i,ip,&f,fp,&c,cp);  
    return 0;
}    