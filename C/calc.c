#include <stdio.h>

int main() {
	long double first, second;
	char op;

	while (1 == 1) {
		printf("Enter expression (e.g. 1 + 1):\n");
		scanf("%Lf %c %Lf", &first, &op, &second);
		switch (op) {
			case '+':
				printf("%Lf \n", first + second);
				break;
			case '-':
				printf("%Lf \n", first - second);
				break;
			case '*':
				printf("%Lf \n", first * second);
				break;
			case '/':
				printf("%Lf \n", first / second);
				break;
			default:
				printf("Error, invalid operator.\n");

		}
	}
}
