#include <stdio.h>
#include <stdlib.h>

int main(){
	int count=0;
	int a[3] = {0};
	int b[3] = {0};
	int i = 0;
	
	for(;i<3;i++){
		if(a[i] !=b[i]){
			printf("�ٸ��ϴ�.");
			break; 
		}
		if(a[i] == b[i]){
			count++;
		if(count == 3)
			printf("�����ϴ�.");
		}
	}
	return 0; 
}
