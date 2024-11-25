#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	double num1, num2, result;
	char operation[5];

	while (1) {
		printf("Enter a number: ");
		if (scanf("%lf", &num1) != 1) {
			printf("Input error. Repeat the input.\n");
			while (getchar() != '\n');
			continue;
		}

		printf("Enter the operation (+, -, *, /) or exit: ");
		scanf("%4s", operation);

		if (strcmp(operation, "exit") == 0) {
			printf("Exiting the program...\n");
			break;
		}
		if (operation[0] != '+' && operation[0] != '-' && operation[0] != '*' && operation[0] != '/') {
			printf("Unknown operation. Repeat the input.\n");
			continue;
		}

		printf("Enter a number: ");
		if (scanf("%lf", &num2) != 1) {
			printf("Input error. Repeat the input.\n");
			while (getchar() != '\n');
			continue;
		}

		switch (operation[0]) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			if (num2 != 0) {
				result = num1 / num2;
			}
			else {
				printf("Error: division by zero!\n");
				continue;
			}
			break;
		default:
			printf("Unknown operation. Repeat the input.\n");
			continue;
		}
		printf("Result: %lf\n", result);
	}
	return 0;
}