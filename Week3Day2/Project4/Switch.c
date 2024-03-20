#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a;
	scanf("%d", &a);
	switch (a) {
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	default:
		printf("default");
	}

	return 0;
}