#include <stdio.h>

int main() {
	int first, second;
	char op;

	while (1 == 1) {
		printf("Enter expression (e.g. 1 + 1):\n");
		scanf("%d %c %d", &first, &op, &second);
		switch (op) {
			case '+':
				printf("%d \n", first + second);
				break;
			case '-':
				printf("%d \n", first - second);
				break;
			case '*':
				printf("%d \n", first * second);
				break;
			case '/':
				printf("%d \n", first / second);
				break;
			default:
				printf("Error, invalid operator.\n");

		}
	}
}
