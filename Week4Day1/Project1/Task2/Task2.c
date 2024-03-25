/*
	[문제]
	• int before[5]={1,2,3,4,5} 에 있는
	값의 순서를 뒤집어서 after
	배열에 저장해보자.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int before[5] = { 1, 2, 3, 4, 5 };
	int i, j;

	printf("Before : ");
	for (i = 0; i < 5; i++) {
		printf("%d ", before[i]);
	}

	for (i = 0; i < 3; i++) {
		int temp;
		temp = before[i];
		before[i] = before[5 - (i + 1)];
		before[5 - (i + 1)] = temp;
	}

	printf("\nAfter : ");
	for (i = 0; i < 5; i++) {
		printf("%d ", before[i]);
	}

	return 0;
}