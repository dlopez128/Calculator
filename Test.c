#include <stdio.h>

int main()
{
	// Variables and initialization 
	int a, b;
	char operator;

	// User types in expression. 
	printf("\nEnter two operands: \n");
	scanf_s("%d %d", &a, &b);
	printf("\nEnter an operator: \n");
	scanf_s("%c", &operator);

	// Print Results
	switch (operator) {
	
	case '+':
		printf("%d + %d = %d", a, b, a + b);
		break;

	case '-':
		printf("%d - %d = %d", a, b, a - b);
		break;

	case '*':
		printf("%d * %d = %d", a, b, a * b);
		break;

	case '/':
		printf("%d / %d = %d", a, b, a / b);
		break;

	}

	return 0;

}