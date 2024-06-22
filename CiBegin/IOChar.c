#include <stdio.h>

void IOChar() {
	char alphabet[40];

	for (int i = 0; i < sizeof(alphabet); i++) {
		alphabet[i] = getchar();
		if (alphabet[i] == '\n') {
			break;
		}
		printf("\n %c", alphabet[i]);
	}
	printf("\n");
	for (int i = 0; i < sizeof(alphabet); i++) {
		printf("%d ", alphabet[i]);
	}
}