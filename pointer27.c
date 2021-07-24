#include <stdio.h>
int main(){
	
	int i=10;
	int *ptr=&i;
	printf("&i=%d i=%d\n",&i,i);
	printf("ptr=%d *ptr=%d\n",ptr,*ptr);

	printf("\ncase1 ptr++\n");
	ptr++;	
	printf("&i=%d i=%d\n",&i,i);
	printf("ptr=%d *ptr=%d\n",ptr,*ptr);
	
	
	ptr=&i;
	printf("\ncase2 (*ptr)++\n");
	(*ptr)++;	
	printf("&i=%d i=%d\n",&i,i);
	printf("ptr=%d *ptr=%d\n",ptr,*ptr);
	
	
	ptr=&i;
	printf("\ncase3 *(++ptr)\n");
	*(++ptr);
	printf("&i=%d i=%d\n",&i,i);
	printf("ptr=%d *ptr=%d\n",ptr,*ptr);
	
	ptr=&i;
	printf("\ncase4 *(--ptr)\n");
	*(--ptr);
	printf("&i=%d i=%d\n",&i,i);
	printf("ptr=%d *ptr=%d\n",ptr,*ptr);
	

	return 0;	
	
}