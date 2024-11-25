#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int calculate_polynomial(const char *polynomial, double x) {

}

int main() {
	char polynomial[100];
	printf("Enter a polynomial: ");
	fgets(polynomial, sizeof(polynomial), stdin);
	polynomial[strcspn(polynomial, "\n")] = 0;

	while (1) {
		char input[100];
		printf("Enter x: ");
		fgets(input, sizeof(input), stdin);
		input[strcspn(input, "\n")] = 0;

		if (strcmp(input, "exit") == 0) {
			break;
		}

		double x = atof(input);
		double result = calculate_polynomial(polynomial, x);
		printf("Result for x = %lf: %lf\n", x, result);
	}
	return 0;
}