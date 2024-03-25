/*
	[문제]
	10개의 값을 입력 받은 후, 입력 받은 정수 
	목록을 출력한 뒤, 최솟값과 최댓값을 출력하라.
	• Hint : 현재 min, max 값을 저장하는 변수 이용!
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int inputAry[10] = { 0, };
	int minNum = 0, maxNum = 0;
	int i;

	for (i = 0; i < 10; i++) {
		printf("%d 번째 숫자를 입력하세요 : ", i + 1);
		scanf("%d", &inputAry[i]);
	}


	printf("입력한 정수 목록 : ");

	for (i = 0; i < 10; i++) {
		printf("%d ,", inputAry[i]);
	}
	
	minNum = inputAry[0];
	maxNum = inputAry[0];

	for (i = 0; i < 10; i++) {
		if (inputAry[i] < minNum) {
			minNum = inputAry[i];
		}
		if (maxNum < inputAry[i]) {
			maxNum = inputAry[i];
		}
	}

	printf("\n최솟값 : %d, 최댓값 : %d", minNum, maxNum);



	return 0;
}