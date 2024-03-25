/*
	[문제]
	• 정수값 두 개를 입력받아 사칙연산의 결과를 각각 출력
	• 각각 add, subtract, multiplication, division function을 이용
	• 두 번째 값이 0이 아니라는 가정!
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int n1, int n2);
int subtract(int n1, int n2);
int multiplication(int n1, int n2);
int division(int n1, int n2);

int main() {

	int num1, num2;

	printf("두 값을 입력하세요 (두 번째 값은 0이 올 수 없습니다.) : ");

	scanf("%d %d", &num1, &num2);

	if (num2 == 0) {
		printf("두 번째 값으로는 0이 들어올 수 없습니다.\n");
		return 0;
	}
	printf("두 값의 계산 결과는 다음과 같습니다.\n");
	printf("합 : %d, 차 : %d, 곱 : %d, 나눗셈 : %d", add(num1, num2), subtract(num1, num2), multiplication(num1, num2), division(num1, num2));

	return 0;
}

int add(int n1, int n2) {
	return n1 + n2;
}


int subtract(int n1, int n2) {
	return n1 - n2;
}

int multiplication(int n1, int n2) {
	return n1 * n2;
}

int division(int n1, int n2) {
	return n1 / n2;
}



