#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	double result = 0, num;
	char operation[5];

	while (1) {
		printf("Result: %lf\n", result);

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
		if (scanf("%lf", &num) != 1) {
			printf("Input error. Repeat the input.\n");
			while (getchar() != '\n');
			continue;
		}

		switch (operation[0]){
		case '+':
			result = result + num;
			break;
		case '-':
			result = result - num;
			break;
		case '*':
			result = result * num;
			break;
		case '/':
			if (num != 0) {
				result = result / num;
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
	}
}