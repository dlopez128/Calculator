#include <stdio.h>

int main()
{
	// Variables and initialization 
	int a, b;
	char operator;

	// User types in expression. 
	printf("Enter two operands: ");
	scanf_s("%d %d", &a, &b);
	printf("Enter an operator (+, -, *, /): ");
	scanf_s("%c", &operator);

	// Print Results
	switch (operator) {
	case '+':
		printf("%d", a + b);
		break;
	case '-':
		printf("%d", a - b);
		break;
	case '*':
		printf("%d", a * b);
		break;
	case '/':
		printf("%d", a / b);
		break;

	}

	return 0;

}