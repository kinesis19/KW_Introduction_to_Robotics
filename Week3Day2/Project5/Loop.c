#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i;
	/*for (i = 0; i < 100; i++) {
		printf("%d\n", i);
	}*/
	/*i = 0;
	while (i < 100) {
		printf("%d\n", i);
		i++;
	}*/

	i = 0;
	do {
		printf("%d\n", i);
		i++;
	} while (i < 100);

	return 0;
}