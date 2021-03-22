#include <stdio.h>

int main()
{
	// Variables and initialization 
	int a, b, result;
	char operator;

	// User types in expression. 
	printf("\nEnter two operands: \n");
	scanf_s("%d %d", &a, &b);
	printf("\nEnter an operator: \n");
	scanf_s("%c", &operator);

	// Print Results
	switch (operator) {
	
	case '+':
		printf("result = %d", a + b);
		break;

	case '-':
		printf("result = %d", a - b);
		break;

	case '*':
		printf("result = %d", a * b);
		break;

	case '/':
		printf("result = %d", a / b);
		break;

	}

	return 0;

}