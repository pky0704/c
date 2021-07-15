#include <stdio.h>
#include <stdlib.h>

int main(){
	int grade[10] = {0};
	int i = 0;
	
	for(;i<10;i++){
		grade[i] = rand() % 100;
		printf("%d ¹øÂ° : %d\n", i+1, grade[i]);
	}
	return 0;
}

