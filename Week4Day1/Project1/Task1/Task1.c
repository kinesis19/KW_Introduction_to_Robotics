/*
	[문제]
	별표(*)로 삼각형 그리기
	• 한 번에 하나의 별(*)만 사용할 것
	• For loop 두 개를 이용하여 만들어 볼 것
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}