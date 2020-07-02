#include <stdio.h>

int sum(int v1, int v2); //sum function

int main(int argc, char* argv[]){
	int result;
	result = sum (10,20);		
	printf("result = %d", result);
	return 0;
}

int sum(int v1, int v2){
	return v1+v2;
}