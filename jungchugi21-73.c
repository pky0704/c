#include <stdio.h>
int main(int argc, char *argv[]){
    int a[2][2] = {{11,22}, {44,55}}; //2행 2열 a[0][0]=11,a[0][1]=22, a[1][0]=44,a[1][1]=55
        // printf("%d\n",a[0][0]);//11
        // printf("%d\n",a[0][1]);//22
        // printf("%d\n",a[1][0]);//44
        // printf("%d\n",a[1][1]);//55
    int i, sum = 0;
    int *p;
    p = a[0]; //첫번째 값 11

    for(i=1; i<4; i++)
    sum += *(p+i); // sum = sum + *(p+1) + *(p+2) + *(p+3)
        printf("%d\n", *p);
        printf("%d\n", *(p+1));
        printf("%d\n", *(p+2));
        printf("%d\n", *(p+3));
        printf("sum = *(p+1)+*(p+2)+*(p+3)=%d+%d+%d\n", *(p+1),*(p+2),*(p+3));
    printf("%d", sum);
    return 0;
    
 }