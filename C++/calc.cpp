#include <iostream>

long double calc(long double first, char op, long double second) {
	if (op == '+') {
		return first + second;
	} else if (op == '-') {
		return first - second;
	} else if (op == '*') {
		return first * second;
	} else if (op == '/' ) {
		return first / second;
	} else {
		std::cout << "Error, invalid operator.";
	}
}


int main() {
	long double first, second, fin;
	char op;

	while (1 == 1) {
		std::cout << "\nType expression (e.g. 1 + 1):\n";
		std::cin >> first >> op >> second;
		fin = calc(first, op, second);
		std::cout << fin;
	}
}
