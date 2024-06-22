#include <stdio.h>
#define BEG 0
#define END 100
#define STEP 10

TransfFahrToCels() {
	float fahr, celsius;

	printf("Фаренгейт Цельсий\n");
	for (fahr = BEG; fahr <= END; fahr += STEP) {
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%9.2f %7.2f\n", fahr, celsius);
	}
	printf("\n");
}

TransfCelsToFahr() {
	float fahr, celsius;

	printf("Цельсий Фарегнейт\n");
	for (celsius = BEG; celsius <= END; celsius += STEP) {
		fahr = (celsius * (9.0 / 5.0)) + 32;
		printf("%7.2f %9.2f\n", celsius, fahr);
	}
	printf("\n");
}
